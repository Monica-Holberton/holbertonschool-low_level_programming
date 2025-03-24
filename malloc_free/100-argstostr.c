#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of a program into a single string.
 * @ac: Argument count.
 * @av: Argument vector (array of strings).
 *
 * Return: A pointer to the new concatenated string, or NULL on failure.
 * Each argument is followed by a newline ('\n') in the new string.
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len = 0, pos = 0;

if (ac == 0 || av == NULL)
return NULL;

for (i = 0; i < ac; i++)
for (j = 0; av[i][j]; j++)
len++;

str = malloc(sizeof(char) * (len + ac + 1));
if (str == NULL)
return NULL;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++, pos++)
str[pos] = av[i][j];
str[pos++] = '\n';
}

str[pos] = '\0';
return str;
}
