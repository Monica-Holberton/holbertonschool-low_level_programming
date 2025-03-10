#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: calculate and print the sum of even Fibonacci numbers.
 * Not exceed 4,000,000.
 * The sum of the two preceding terms, starting from 1 and 2.
 * Only even numbers are summed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long prev = 1, curr = 2, next;
long sum = 2;

while (curr <= 4000000)
{
next = prev + curr;
prev = curr;
curr = next;

if (curr % 2 == 0)
{
sum += curr;
}
}

printf("%ld\n", sum);
return (0);
}
