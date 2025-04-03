#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Defines a dog's characteristics.
 * @name: Pointer to the dog's name (string).
 * @age: The dog's age (float).
 * @owner: Pointer to the owner's name (string).
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Define dog_t as a new name for struct dog */
typedef struct dog dog_t;

#endif /* DOG_H */

