#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 * If malloc fails, the function terminates the process with status 98.
 */
void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);  /* Allocate memory */
if (ptr == NULL)  /* Check if malloc failed */
exit(98);  /* Terminate process with status 98 */

return (ptr);  /* Return pointer to allocated memory */
}
