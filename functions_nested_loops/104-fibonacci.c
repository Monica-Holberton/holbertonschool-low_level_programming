#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: print the first 98 Fibonacci numbers, start with 1 and 2.
 * Handling large values using two separate variables.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long first = 1, second = 2, next;
unsigned long first_half1, first_half2, second_half1, second_half2;
unsigned long divisor = 1000000000;
int count;

printf("%lu, %lu", first, second);

for (count = 3; count <= 92; count++)
{
next = first + second;
printf(", %lu", next);
first = second;
second = next;
}
first_half1 = first / divisor;
first_half2 = first % divisor;
second_half1 = second / divisor;
second_half2 = second % divisor;

for (; count <= 98; count++)
{
unsigned long high = first_half1 + second_half1;
unsigned long low = first_half2 + second_half2;

if (low >= divisor)
{
high++;
low -= divisor;
}
printf(", %lu%09lu", high, low);
first_half1 = second_half1;
first_half2 = second_half2;
second_half1 = high;
second_half2 = low;
}

putchar('\n');
return (0);
}
