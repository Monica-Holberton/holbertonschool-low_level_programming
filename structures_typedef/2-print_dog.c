#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the elements of a struct dog.
 * @d: Pointer to the struct dog.
 *
 * Description: If an element is NULL, print "(nil)" instead.
 * If d is NULL, print nothing.
 */
void print_dog(struct dog *d)
{
    /* Check if the struct pointer is NULL */
if (d == NULL)
return;

    /* Print name */
if (d->name == NULL)
printf("Name: (nil)\n");
else
printf("Name: %s\n", d->name);

    /* Print age */
printf("Age: %f\n", d->age);

    /* Print owner */
if (d->owner == NULL)
printf("Owner: (nil)\n");
else
printf("Owner: %s\n", d->owner);
}
