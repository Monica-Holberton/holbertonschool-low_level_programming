#include "main.h"

/**
 * check_prime - Recursively checks if a number is prime.
 * @n: The number to check.
 * @i: The current divisor being tested.
 *
 * Description: This helper function determines whether `n` is a prime number
 * by checking starting from `i`. If `n` is divisible by any `i`
 * The function stops when `i` reaches `n`
 *
 * Return: 1 if `n` is a prime number, 0 otherwise.
 */
int check_prime(int n, int i)
{

if (n <= 1)
return (0);

if (n == i)
return (1);

if (n % i == 0)
return (0);

return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Determines if a number is a prime number.
 * @n: The integer to check.
 *
 * Description: checks if the integer `n` is a prime number.
 * If `n` is prime, it returns 1;
 * otherwise, it returns 0.
 *
 * Return: 1 if `n` is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
return (check_prime(n, 2));
}
