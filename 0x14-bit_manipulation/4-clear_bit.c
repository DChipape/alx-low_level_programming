#include "main.h"

/**
 * clear_bit - clear a bit to 0 for an index
 * @n: a pointer to the number
 * @index: an index
 * Return: 1 success, or -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int mask = 1;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}

