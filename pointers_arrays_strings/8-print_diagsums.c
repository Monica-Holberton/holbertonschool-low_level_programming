#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the first element of the matrix.
 * @size: The size of the square matrix (no. of rows/columns).
 *
 */

void print_diagsums(int *a, int size)
{
int sum1 = 0, sum2 = 0, i;

for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}

printf("%d, %d\n", sum1, sum2);
}
