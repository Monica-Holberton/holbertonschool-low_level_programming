#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times
 * Description: Uses _putchar to print the numbers, ensuring that
 * it only uses _putchar three times in total.
 */
void more_numbers(void)
{
int i, num;

for (i = 0; i < 10; i++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
_putchar((num / 10) + '0');

_putchar((num % 10) + '0');
}
_putchar('\n');
}
}
