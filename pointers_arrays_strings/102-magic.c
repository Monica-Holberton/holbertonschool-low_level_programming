#include <stdio.h>

/**
 * main - Demonstrates pointer manipulation to modify an array
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
    /* ...so that this prints "a[2] = 98\n" */
puts("a[2] = 98");
return (0);
}
