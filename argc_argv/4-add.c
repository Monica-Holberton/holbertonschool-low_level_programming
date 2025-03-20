#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* is_number - Checks if a string contains only digit characters.
* @s: The string to check.
*
* Return: 1 if the string contains only digits, 0 otherwise.
*/
int is_number(char *s)
{
int i = 0;
for (; s[i] != '\0'; i++)
{
if (!isdigit(s[i]))
{
return (0);
}
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
int i;
int result = 0;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
if (is_number(argv[i]))
{
result += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", result);
return (0);
}
else
{
printf("0\n");
return (0);
}
}
