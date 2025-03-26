#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to previously allocated memory block
 * @old_size: Size of the previously allocated block in bytes
 * @new_size: New size of the memory block in bytes
 *
 * Return: Pointer to the newly allocated memory, or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *new_ptr, *old_ptr;

    /* If new_size is the same as old_size, do nothing and return ptr */
if (new_size == old_size)
return (ptr);

    /* If ptr is NULL, equivalent to malloc(new_size) */
if (ptr == NULL)
return (malloc(new_size));

    /* If new_size is 0 and ptr is not NULL, equivalent to free(ptr) */
if (new_size == 0)
{
free(ptr);
return (NULL);
}

    /* Allocate new memory block */
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

    /* Copy data from old block to new block */
old_ptr = ptr;
for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
new_ptr[i] = old_ptr[i];

    /* Free the old memory block */
free(ptr);

return (new_ptr);
}
