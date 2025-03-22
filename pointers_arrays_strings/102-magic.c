#include <stdio.h>

/**
 * main - Demonstrates pointer manipulation to modify an array
 *
 * Description:
 * This program initializes an array and a pointer, then uses pointer
 * arithmetic to modify the value of a specific element in the array
 * without directly referencing it. The goal is to change `a[2]` to 98
 * by using only pointer operations.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;

    /*
     * write your line of code here...
     * Remember:
     * - you are not allowed to use the variable a
     * - you are not allowed to modify the variable p
     * - you can only write one statement
     * - you are not allowed to use ,
     * - you are not allowed to code anything else than the line of code
     * - you are allowed to use the standard library
     */
*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);

return (0);
}
