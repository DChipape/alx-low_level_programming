#include "main.h"

/**
 * set_bit - Sets bit to 1 at given a index
 * @n: Pointer to a number
 * @index: Index a bit
 * Return: 1 if success, or -1 if error occured
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
