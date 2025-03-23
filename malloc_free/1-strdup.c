#include <stdlib.h>

/**
 * _strdup - Duplicates a string in a newly allocated memory space.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL or if
 * memory allocation fails.
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len = 0;

if (str == NULL)
return NULL;

while (str[len])
len++;

dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return NULL;

for (i = 0; i < len; i++)
dup[i] = str[i];
dup[len] = '\0';

return dup;
}
