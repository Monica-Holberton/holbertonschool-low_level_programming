#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog and stores a copy of the name and owner.
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: a pointer to the newly created dog,
 * or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog = malloc(sizeof(dog_t)); /* Allocate memory for the dog structure */
if (dog == NULL)  /* Check if malloc failed */
return (NULL);

/* Allocate memory for the name and owner, and copy the values */
dog->name = strdup(name); /* Use strdup to copy the name string */
if (dog->name == NULL)
{
free(dog);
return (NULL);
}

dog->owner = strdup(owner); /* Use strdup to copy the owner string */
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}

dog->age = age;
return (dog);
}

/**
 * free_dog - frees memory allocated for a dog
 * @d: pointer to the dog structure
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
