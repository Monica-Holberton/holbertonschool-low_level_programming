#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

 /*
  * is_number : a function Checks if a string contains only digit character.
  * Program: Add Positive Numbers
  * Description: Adds positive numbers as command-line args and prints sum.
  * Prints "0" if no numbers are provided.
  * Prints "Error" and returns 1 if any argument is not a valid number.
  * Checks if a string contains only digits.
  * str - The string to check.
  * Return: 1 - If the string contains only digits, 0 - Otherwise.
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

 /*
  * main - Adds positive numbers from command-line arguments.
  *
  * Parameters:
  * @argc - Argument count.
  * @argv - Argument vector.
  *
  * Return: Always (0)
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
