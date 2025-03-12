#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 * Negative if s1 < s2,
 * Positive if s1 > s2.
 * Return: 0 if s1 and s2 are equal.
 */
int _strcmp(char *s1, char *s2)
{
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
}
