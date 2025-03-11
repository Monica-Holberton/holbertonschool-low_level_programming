#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int found_number = 0;

while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
found_number = 1;
}
else if (found_number)
break;

s++;
}

return (result *sign);
}
