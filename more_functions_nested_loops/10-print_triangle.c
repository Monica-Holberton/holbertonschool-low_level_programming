#include "main.h"

/**
 * print_triangle - Prints a triangle using the '#' character
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
    int i, j, spaces;

    if (size > 0)
    {
        for (i = 1; i <= size; i++)
        {
            /* Print spaces */
            for (spaces = size - i; spaces > 0; spaces--)
                _putchar(' ');

            /* Print '#' */
            for (j = 0; j < i; j++)
                _putchar('#');

            _putchar('\n'); /* Move to the next line */
        }
    }
    else
    {
        _putchar('\n'); /* Print newline if size <= 0 */
    }
}
