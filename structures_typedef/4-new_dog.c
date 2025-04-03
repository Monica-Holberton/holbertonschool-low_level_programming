#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Pointer to the dog's name (string).
 * @age: The dog's age (float).
 * @owner: Pointer to the owner's name (string).
 *
 * Return: Pointer to the new dog_t structure, or NULL on failure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;

    /* Allocate memory for the new dog structure */
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

    /* Allocate memory and copy name */
name_copy = malloc(strlen(name) + 1);
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
strcpy(name_copy, name);

    /* Allocate memory and copy owner */
owner_copy = malloc(strlen(owner) + 1);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
strcpy(owner_copy, owner);

    /* Assign values to struct members */
new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;

return (new_dog);
}
