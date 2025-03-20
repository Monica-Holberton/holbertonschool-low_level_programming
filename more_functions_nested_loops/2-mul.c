#include <stdio.h>

/**
 * mul - Multiplies two integers.
 * @a: First integer.
 * @b: Second integer.
 *
 * Return: The product of a and b.
 */
int mul(int a, int b)
{
return (a * b);
}

/**
 * main - Tests the mul function.
 *
 * Return: Always 0.
 */
int main(void)
{
int result = mul(3, 4);
printf("3 * 4 = %d\n", result);
return (0);
}
