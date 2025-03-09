#include <stdio.h>

/**
 * main - Computes and prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int sum = 0;
int c;

for (c = 0; c < 1024; c++)
{
if (c % 3 == 0 || c % 5 == 0)
{
sum = c + sum;
}
}

printf("%d\n", sum);
return (0);
}
