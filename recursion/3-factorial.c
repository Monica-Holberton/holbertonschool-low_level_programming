#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Description: This function calculates the factorial of `n` recursively.
 * If `n` is negative, it returns -1 to indicate an error.
 * The factorial of 0 is defined as 1.
 *
 * Return: The factorial of `n`, or -1 if `n` is negative.
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}

if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
