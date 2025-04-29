#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to modify
 * @index: index of the bit to clear, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
/* Check if the index is valid*/
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

/* bitwise AND + the complement of a bitmask to clear the bit at 'index' */
/* Shift 1 as an Unsigned Long to handle larger indexes */
*n = *n & ~(1UL << index);

return (1);
}
