#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a comparison function.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A function pointer used to compare each element in the array.
 *
 * Return: The index of the first element for which the `cmp` function
 *         does not return 0, or -1 if no match is found or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

/*Check if array or cmp function pointer is NULL or if size <= 0*/
if (array == NULL || cmp == NULL || size <= 0)
return (-1);

/*Iterate through the array and apply the cmp function on each element*/
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)  /*If cmp returns a non-zero value, return the index*/
return (i);
}

return (-1);
}
