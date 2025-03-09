#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number defining the size of the times table (0 ≤ n ≤ 15).
 *
 * Description: If 'n' is out of range (n < 0 or n > 15),
 * the function does not print anything.
 *
 */
void print_times_table(int n)
{
int r, c, sum;
if (n < 0 || n > 15)
return;

for (r = 0; r <= n; r++)
{
for (c = 0; c <= n; c++)
{
sum = r * c;

if (c == 0)
_putchar(sum + '0');
else
{
_putchar(',');
_putchar(' ');

if (sum < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(sum + '0');
}
else if (sum < 100)
{
_putchar(' ');
_putchar((sum / 10) + '0');
_putchar((sum % 10) + '0');
}
else
{
_putchar((sum / 100) + '0');
_putchar(((sum / 10) % 10) + '0');
_putchar((sum % 10) + '0');
}
}
}
_putchar('\n');
}
}

