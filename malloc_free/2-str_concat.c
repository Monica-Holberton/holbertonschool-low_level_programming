#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory space.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL if allocation fails.
 * If either string is NULL, it is treated as an empty string.
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
unsigned int i, j, len1 = 0, len2 = 0;

if (s1 != NULL)
while (s1[len1])
len1++;
    
if (s2 != NULL)
while (s2[len2])
len2++;

concat = malloc(sizeof(char) * (len1 + len2 + 1));
if (concat == NULL)
return NULL;

for (i = 0; i < len1; i++)
concat[i] = s1[i];
    
for (j = 0; j < len2; j++, i++)
concat[i] = s2[j];
    
concat[i] = '\0';

return concat;
}
