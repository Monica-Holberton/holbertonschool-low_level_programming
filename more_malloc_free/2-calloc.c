#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL if allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
char *x;

    /* Check if the number of elements or size is zero */
if (nmemb == 0 || size == 0)
return (NULL);

    /* Allocate memory for the array */
ptr = malloc(nmemb * size);
if (ptr == NULL)  /* Check if malloc failed */
return (NULL);

x = ptr;
for (i = 0; i < (nmemb * size); i++)  /* Initialize allocated memory to zero */
x[i] = 0;

return (ptr);  /* Return pointer to allocated memory */
}
