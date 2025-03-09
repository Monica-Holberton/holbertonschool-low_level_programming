#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all unique two-digit combinations
 * Return: 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 0; i <= 8; i++) /* First digit (0-8) */
    {
        for (j = i + 1; j <= 9; j++) /* Second digit (1-9), always > i */
        {
            putchar(i + '0'); /* Convert int to char */
            putchar(j + '0'); /* Convert int to char */

            if (i != 8 || j != 9) /* Avoid trailing ", " at the end */
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
