#include <stdlib.h>
/**
 * create_array - Creates an array of chars.
 * @size: The size of the array to be created.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the array, or NULL if size is 0 or if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
return (NULL);

arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
arr[i] = c;

return (arr);
}
