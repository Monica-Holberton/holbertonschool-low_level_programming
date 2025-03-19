#include <stdio.h>

 /*
 * main - print all arguments received, one per line.
 *
 * Parameters:
 * @argc: argument count
 * @argv: argument vector
 * Program: Print All Arguments
 * Description: prints all arguments it receives, including the file name
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);

}
return (0);
}
