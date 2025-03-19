#include <stdio.h>
#include <stdlib.h>
 
 /*
 * main - start of the program
 * Description: multiplies two numbers as command-line arguments
 * and prints the result, followed by a new line.
 * Parameters:
 * @argc: argument count
 * @argv: argument vector
 * Return:Always (0)
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return 1;
}

int no1 = atoi(argv[1]);
int no2 = atoi(argv[2]);
printf("%d\n", no1 * no2);
 
return (0);
}
