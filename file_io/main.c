#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to test the cp program
 * @argc: number of arguments
 * @argv: array of argument strings
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    extern int _cp(int argc, char *argv[]);

    return (_cp(argc, argv));
}
