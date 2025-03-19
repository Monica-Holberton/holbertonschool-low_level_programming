/*
* Program: Add Positive Numbers
* Description: Adds positive numbers as command-line and print the sum.
* Prints "0" if no numbers are provided.
* Prints "Error" and returns 1 if any argument is not a valid number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_number - Checks if a string contains only digit characters.
* @str: The string to check.
*
* Return: 1 if the string contains only digits, 0 otherwise.
*/
int is_number(char *str)
{
for (int i = 0; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
return (0);
}
return (1);
}

/**
* main - Adds positive numbers from command-line arguments.
* @argc: Argument count.
* @argv: Argument values.
*
* Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (int i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
