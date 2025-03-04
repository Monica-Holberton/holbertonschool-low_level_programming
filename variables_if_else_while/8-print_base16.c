#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all the numbers of base 16.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (num = 'a'; num <= 'f'; num++)
	{
		putch(num);
	}
	putchar('\n');
	return (0);
}
