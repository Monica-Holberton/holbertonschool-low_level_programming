#include <stdio.h>
#include "dog.h"

/**
*print_dog - prints the details of a struct dog.
 * @d: Pointer to a struct dog.
 *
 * Description: If an element of d is NULL, prints (nil) instead.
 * If d is NULL, prints nothing.
 */

void print_dog(struct dog *d)
{
if (d)
printf("Name: %s\nAge: %.1f\nOwner: %s\n",
d->name ? d->name : "(nil)",
d->age,
d->owner ? d->owner : "(nil)");
}
