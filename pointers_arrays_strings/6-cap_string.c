#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The input string
 *
 * Return: Pointer to the modified string
 */
char *cap_string(char *str)
{
int i = 0;
int cap_next = 1;

char separators[] = " \t\n,;.!?\"(){}";

while (str[i] != '\0')
{
if (cap_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
}

cap_next = 0;
for (int j = 0; separators[j] != '\0'; j++)
{
if (str[i] == separators[j])
{
cap_next = 1;
break;
}
}

i++;
}

return (str);
}
