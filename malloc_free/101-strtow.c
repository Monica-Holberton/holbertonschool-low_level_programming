#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 * Words are separated by spaces, and the last element of the array is NULL.
 */
char **strtow(char *str)
{
int i, j, k, word_count = 0, len = 0;
char **words;

if (str == NULL || *str == '\0')
return NULL;

for (i = 0; str[i]; i++)
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
word_count++;

if (word_count == 0)
return NULL;

words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
return NULL;

for (i = 0, k = 0; k < word_count; k++)
{
while (str[i] == ' ')
i++;

len = 0;
while (str[i + len] && str[i + len] != ' ')
len++;

words[k] = malloc(sizeof(char) * (len + 1));
if (words[k] == NULL)
{
while (k-- > 0)
free(words[k]);
free(words);
return NULL;
}

for (j = 0; j < len; j++)
words[k][j] = str[i++];
words[k][j] = '\0';
}

words[k] = NULL;
return words;
}
