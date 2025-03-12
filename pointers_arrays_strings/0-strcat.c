#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Dest string.
 * @src: Source string.
 *
 * Return: Pointer to the result of string dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0;

while (dest[i] != '\0')
i++;

while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}

dest[i] = '\0';

return (dest);
}
