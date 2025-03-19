#include <stdio.h>
#include <main.h>

 /*
  * main: start the program, including its full path.
  * If the program is renamed, the new name will be printed automatically.
 * Program: Print Program Name
 * Description: This program prints its own name, followed by a new line.
 * If the program is renamed, it will print the new name without recompilation.
 * The full path is included in the output.
  * Parameters:
* @argc: argument count
* @argv: argument vector
  * Return: Always (0)
  */
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
