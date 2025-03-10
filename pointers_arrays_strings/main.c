#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * This function tests the swap_int function by swapping two integers
 * and printing their values before and after swapping.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x = 10, y = 20;

printf("Before swap: x = %d, y = %d\n", x, y);
swap_int(&x, &y);
printf("After swap: x = %d, y = %d\n", x, y);

return (0);
}
