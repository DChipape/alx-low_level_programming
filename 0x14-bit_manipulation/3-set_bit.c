#include "main.h"

/**
 * set_bit - set a bit to 1 for an index
 * @n: a pointer to a number
 * @index: an index of a bit
 *
 * Return: 1 success, or -1 error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;
	unsigned long int mask = 1;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	mask <<= index;
	*n = (*n | mask);

	return (1);
}

