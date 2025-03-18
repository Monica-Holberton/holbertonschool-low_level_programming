#include "main.h"

/**
 * find_sqrt - finds the natural square root of a number.
 * @n: The number to find the square root.
 * @i: The current number being tested as the square root.
 *
 * Description: This helper function tries numbers from 0 upwards to
 * check if their square equals `n`.
 *
 * Return: The natural square root of `n`, or -1 if `n` has no root.
 */
int find_sqrt(int n, int i)
{
if (i * i > n)
return (-1);

if (i * i == n)
return (i);

return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Description: finds the natural square root of `n`
 * by calling the helper function `find_sqrt`.
 *
 * Return: The natural square root of `n`, or -1 if `n` has no root.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 1)
{
return (1);
}
return (find_sqrt(n, 2));
}
