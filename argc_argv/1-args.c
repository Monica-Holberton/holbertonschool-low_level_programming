#include <stdio.h>

 /*
  * main: prints the number of arguments passed to the program.
  *
  * Parameters:
  * @argc: argument count
  * @argv: argument vector
  * Program: Print Argument Count
  * Description: print the number of arguments passed into it,
  * followed by a new line.
  * Return: Always (0)
  */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
