#include <stdio.h>
#include "dog.h"
/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to a struct dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Description: This function initializes a struct dog with the provided
 * name, age, and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)  /* Check if the pointer to struct dog is not NULL */
{
d->name = name;
d->age = age;
d->owner = owner;

}
}
