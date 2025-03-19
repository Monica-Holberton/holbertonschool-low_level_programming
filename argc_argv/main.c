#include <stdio.h>

 /*
* main: prints the name of the program, including its full path.
* @argc: argument count
* @argv: argument vector
* Program: Print Program Name
* Description: This program prints its own name, followed by a new line.
* If the program is renamed, it will print the new name without recompilation.
* The full path is included in the output.
* Returns: (0) - Indicates successful execution.
*/
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
