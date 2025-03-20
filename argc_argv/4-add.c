#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define UNUSED(x) (void)(x)

/**
* is_number - Checks if a string contains only digit characters.
* @str: string to check
* Return: 1 if the string contains only digits, 0 otherwise.
*/
int is_number(char *str)
{
int i = 0;

for (int i = 0; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
return (0);
}
return (1);
}

/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
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
