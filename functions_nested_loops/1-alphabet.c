#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a new line
 */
void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		_putchar(alphabet[i]);
		i++;
	}
	_putchar('\n');
}
