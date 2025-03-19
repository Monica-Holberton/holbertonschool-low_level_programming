/*
 * Program: Print Program Name
 * Description: This program prints its own name, followed by a new line.
 * If the program is renamed, it will print the new name without recompilation.
 * The full path is included in the output.
 */

 #include <stdio.h>

 /*
  * main: start the program, including its full path.
  * If the program is renamed, the new name will be printed automatically.
  *
  * Parameters:
  * argc - The number of command-line arguments (unused in this program).
  * argv - An array of strings containing the program name and arguments.
  *
  * Returns:
  *   0 - Indicates successful execution.
  */
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
