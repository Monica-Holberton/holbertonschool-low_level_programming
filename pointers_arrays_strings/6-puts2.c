#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string reverse
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
if (i % 2 == 0)
i++;
}
_putchar('\n');
}
