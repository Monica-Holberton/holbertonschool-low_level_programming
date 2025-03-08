#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
    int i, j;

    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < i; j++)
                _putchar(' ');  /* Print spaces for indentation */

            _putchar('\\');  /* Print backslash */
            _putchar('\n');  /* Move to the next line */
        }
    }
    else
    {
        _putchar('\n');  /* Print newline if n <= 0 */
    }
}
