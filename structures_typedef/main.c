#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dog my_dog = {"Poppy", 3.5, "Bob"};
    struct dog another_dog = {NULL, 4.0, NULL};

    printf("First dog:\n");
    print_dog(&my_dog);

    printf("\nSecond dog:\n");
    print_dog(&another_dog);

    return (0);
}
