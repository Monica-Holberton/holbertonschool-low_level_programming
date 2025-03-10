#include "main.h"
#include <stdio.h>

/**
 * main - Check the _isupper function.
 *
 * Return: Always 0.
 */
int main(void)
{
char c;

c = 'A';
printf("%c: %d\n", c, _isupper(c));

c = 'a';
printf("%c: %d\n", c, _isupper(c));

c = 'Z';
printf("%c: %d\n", c, _isupper(c));

c = 'z';
printf("%c: %d\n", c, _isupper(c));

c = '0';
printf("%c: %d\n", c, _isupper(c));

c = '@';
printf("%c: %d\n", c, _isupper(c));

return (0);
}
