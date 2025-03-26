#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The starting value of the array.
 * @max: The ending value of the array.
 *
 * Return: Pointer to the newly allocated array, or NULL on failure.
 */
int *array_range(int min, int max)
{
    int *arr;
    int i, size;

    /* Return NULL if min is greater than max */
    if (min > max)
        return (NULL);

    /* Calculate the size of the array */
    size = max - min + 1;

    /* Allocate memory for the array */
    arr = malloc(sizeof(int) * size);
    if (arr == NULL)
return (NULL);

    /* Fill the array with values from min to max */
for (i = 0; i < size; i++)
arr[i] = min + i;

return (arr);
}
