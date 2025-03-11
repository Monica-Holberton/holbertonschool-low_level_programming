#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The input string
 */
void puts_half(char *str)
{
int i = 0, n;

while (str[i] != '\0')
i++;

n = (i + 1) / 2;

while (str[n] != '\0')
{
_putchar(str[n]);
n++;
}

_putchar('\n');
}
