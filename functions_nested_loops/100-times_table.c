#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of times table (0 ≤ n ≤ 15)
 */
void print_times_table(int n)
{
int i, j, sum;

if (n < 0 || n > 15)
return (0);

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
sum = i * j;

if (j == 0)
printf("%d", sum);
else
printf(", %3d", sum);

}
printf("\n");
}
}
