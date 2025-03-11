#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
int j = 0, i;
char temp;

while (s[j] != '\0')
j++;

for (i = 0; i < j / 2; i++)
{
temp = s[i];
s[i] = s[j - i - 1];
s[j - i - 1] = temp;
}
}
