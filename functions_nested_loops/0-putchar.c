#include <stdio.h>
/**
 * main - Entry point
 * Description: print strinf using loop & putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{

    char str[] = "_putchar";
    int i;

     while (str[i] != '\0')
    {
        putchar(str[i]);
    }
    putchar('\n');

    return (0);
}
