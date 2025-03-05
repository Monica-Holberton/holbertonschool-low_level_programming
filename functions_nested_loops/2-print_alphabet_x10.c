#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 0;
		while (alphabet[j] != '\0')
		{
			_putchar(alphabet[j]);
			j++;
		}
		_putchar('\n');
	}
}
