#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 * Return: Pointer to the new string, or NULL if malloc fails
 */
char *_strdup(char *str)
{
char *copy;
int i, len = 0;
if (!str)
return (NULL);
while (str[len])
len++;
copy = malloc(sizeof(char) * (len + 1));
if (!copy)
return (NULL);
for (i = 0; i <= len; i++)
copy[i] = str[i];
return (copy);
}

/**
 * new_dog - Creates a new dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 * Return: Pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;

if (!name || !owner)
return (NULL);

dog = malloc(sizeof(dog_t));
if (!dog)
return (NULL);

dog->name = _strdup(name);
dog->owner = _strdup(owner);
if (!dog->name || !dog->owner)
{
free(dog->name);
free(dog->owner);
free(dog);
return (NULL);
}
dog->age = age;
return (dog);
}
