#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the function terminates the process with status 98.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);  /* Allocate memory */
if (ptr == NULL)  /* Check if malloc failed */
exit(98);  /* Terminate process with status 98 */

return (ptr);  /* Return pointer to allocated memory */
}

#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings, using at most n bytes of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: Maximum number of bytes to take from s2.
 *
 * Return: Pointer to newly allocated space + s1 + first n bytes of s2.
 * If n is greater or equal to the length of s2, the entire s2 is used.
 * If function fails, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int i, j, len1 = 0, len2 = 0;

if (s1 != NULL)
while (s1[len1])
len1++;
if (s2 != NULL)
while (s2[len2])
len2++;

if (n >= len2)
n = len2;

concat = malloc(sizeof(char) * (len1 + n + 1));
if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (j = 0; j < n; j++, i++)
concat[i] = s2[j];

concat[i] = '\0';

return (concat);
}
