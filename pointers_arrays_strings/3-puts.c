#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string.
 * @str: The string to print.
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}

_putchar('\n');
}
int main(void)
{
_puts("Holberton!");
_puts("");
return (0);
}
