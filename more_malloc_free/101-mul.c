#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit - Checks if a string consists only of digits.
 * @str: The string to check.
 *
 * Return: 1 if string is valid, 0 otherwise.
 */
int is_digit(char *str)
{
int i = 0;
while (str[i])
{
if (!isdigit(str[i]))
return (0);
i++;
}
return (1);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
unsigned long num1, num2, result;

    /* Check for correct number of arguments */
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}

    /* Convert arguments to unsigned long and multiply */
num1 = strtoul(argv[1], NULL, 10);
num2 = strtoul(argv[2], NULL, 10);
result = num1 *num2;

    /* Print the result */
printf("%lu\n", result);
return (0);
}
