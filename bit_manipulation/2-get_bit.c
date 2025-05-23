#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to search
 * @index: the index of the bit to return (starting from 0)
 *
 * Return: value of the bit at index, or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

return ((n >> index) & 1);
}
