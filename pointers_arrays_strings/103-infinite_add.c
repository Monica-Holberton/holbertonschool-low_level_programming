#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers stored as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The buffer size.
 *
 * Return: Pointer to the result (r) or 0 if result cannot fit in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = strlen(n1), len2 = strlen(n2);
int carry = 0, sum, i = len1 - 1, j = len2 - 1, k = size_r - 2;

r[size_r - 1] = '\0';

while (i >= 0 || j >= 0 || carry)
{
if (k < 0)
return (0);

sum = carry;
if (i >= 0)
sum += n1[i--] - '0';
if (j >= 0)
sum += n2[j--] - '0';

carry = sum / 10;
r[k--] = (sum % 10) + '0';
}

if (k < 0)
return (0);

return (&r[k + 1]);
}
