#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination memory where data is copied
 * @src: Source memory from where data is copied
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the destination memory (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i]; /* Copy each byte from src to dest */
}

return (dest);
}
