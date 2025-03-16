#include "main.h"

/**
 * _puts_recursion - Recursively prints a string followed by a new line.
 * @s: The string to be printed.
 *
 * Description: This function prints a string character by character
 * recursively until it reaches the null terminator, then prints a newline.
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
