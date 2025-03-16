#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates pointer manipulation
 * to modify an array value without directly using the array variable.
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
* - you are not allowed to use the variable a
* - you are not allowed to modify the variable p
* - you can only write one statement
* - you are not allowed to use ,
* - you are not allowed to code anything else than the expected line of code
* - do not remove anything from the initial code (not even the comments)
* - don’t change the spaces to tabs!
* - you are allowed to use the standard library
*/
*(p + 5) = 98;

printf("a[2] = ");
printf("%d", a[2]);
printf("\n");

return (0);
}
