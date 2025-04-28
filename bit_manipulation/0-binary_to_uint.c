#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1 characters
 * 
 * Return: the converted number, or 0 if there is one or more
 *         invalid characters in the string or if `b` is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;

/* Check if the input string is NULL */
if (b == NULL)
return (0);

while (*b)
{
/* Check if the current character is not '0' or '1' */
if (*b != '0' && *b != '1')
return (0);

/* Shift left << by multiplying by 2 and adding the current bit */
num = num * 2 + (*b - '0');
b++;
}

/* Return the final converted value */
return (num);
}
