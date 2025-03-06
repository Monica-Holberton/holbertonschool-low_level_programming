#include "main.h"

/**
 * times_table - Prints the 9 times table from 0 to 9
 */
void times_table(void)
{
int row, col, product;

for (row = 0; row <= 9; row++)
{
for (col = 0; col <= 9; col++)
{
product = row * col;

if (col > 0)
{
_putchar(',');
_putchar(' ');
if (product < 10)
_putchar(' '); /* Align single-digit numbers */
}
_putchar((product / 10) ? (product / 10) + '0' : ' '); /* Tens place */
_putchar((product % 10) + '0'); /* Ones place */
}
_putchar('\n');
}
}
