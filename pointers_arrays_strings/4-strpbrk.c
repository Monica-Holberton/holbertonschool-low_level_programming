#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The main string to search
 * @accept: The set of characters to look for
 *
 * Return: Pointer to the first occurrence in s of any byte from accept,
 * or NULL if no match is found
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}

return (NULL);
}
