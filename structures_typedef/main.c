#include <stdio.h>
#include "dog.h"

int main(void)
{
    char name[] = "Poppy";
    char owner[] = "Bob";
    dog_t *my_dog;

    my_dog = new_dog(name, 3.5, owner);
    
    if (my_dog == NULL)
    {
        printf("Failed to create dog\n");
        return (1);
    }

    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

    /* Modify the original strings */
    name[0] = 'X';
    owner[0] = 'Y';

    /* Check if the stored name & owner changed */
    printf("After modifying original strings:\n");
    printf("My name is %s, and my owner is %s\n", my_dog->name, my_dog->owner);

    return (0);
}
