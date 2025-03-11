#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string.
 */
void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
i++;

while (i > 0)
{
_putchar(s[i - 1]);
i--;
}

_putchar('\n');
}
