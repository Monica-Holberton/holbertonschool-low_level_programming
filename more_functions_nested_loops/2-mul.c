#include "main.h"
#include <stdio.h>

/**
 * mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product of a and b
 */
int mul(int a, int b)
{
return (a * b);
}

/**
 * main - Entry point of the program
 *
 * Description: Calls the `mul` function to multiply two integers
 * and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int result = mul(3, 4);
printf("%d\n", result);
return (0);
}
