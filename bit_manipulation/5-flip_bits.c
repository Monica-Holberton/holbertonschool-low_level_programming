#include "main.h"

/**
 * flip_bits - counts the number of bits to convert one number to another
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result;
unsigned int count = 0;

xor_result = n ^ m; /* XOR give bits that are different between n + m */

while (xor_result)
{
count += xor_result & 1; /* Add 1 if the last significant bit is 1 */
xor_result >>= 1;        /* Shift right to check the next bit */
}

return (count);
}
