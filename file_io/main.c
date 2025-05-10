#include <stdio.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);

/**
 * main - Entry point to test read_textfile function
 *
 * Return: Always 0
 */
int main(void)
{
	ssize_t n;

	n = read_textfile("test.txt", 1024);
	printf("\n[Printed %ld characters]\n", n);
	return (0);
}
