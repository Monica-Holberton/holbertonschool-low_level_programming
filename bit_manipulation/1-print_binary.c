#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
unsigned long int mask = 1;
int start = 0;

/* Move mask to the highest bit of n */
mask <<= (sizeof(n) * 8 - 1);

while (mask)
{
if (n & mask)
{
_putchar('1');
start = 1;
}
else if (start)
{
_putchar('0');
}
mask >>= 1;
}

if (!start)
_putchar('0');
}
