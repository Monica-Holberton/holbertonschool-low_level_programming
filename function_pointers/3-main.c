#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point. Performs simple arithmetic operations.
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, exits with specific error codes otherwise
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*operation)(int, int);

/* Check if the number of arguments is correct */
if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

/* Get the operation function */
operation = get_op_func(argv[2]);
if (operation == NULL)
{
printf("Error\n");
exit(99);
}

/* Check for division or modulo by zero */
if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
exit(100);
}

/* Perform the operation */
result = operation(num1, num2);
printf("%d\n", result);

return (0);
}
