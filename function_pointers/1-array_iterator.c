#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - Iterates through an array and applies a function
 * on each element of the array.
 * @array: The array of integers.
 * @size: The size of the array.
 * @action: A pointer to the function that will be applied on each element.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

/*Ensure array and action are not NULL before continuing*/
if (array == NULL || action == NULL)
return;

/*Iterate through the array and apply the function to each element*/
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
