#include "main.h"

/**
 * clear_bit - clear bit at given index
 * @n: a number
 * @index: indexof bit
 *
 * Return: 1 if success, or -1 if error occurred
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
