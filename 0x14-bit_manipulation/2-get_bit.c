#include "main.h"

/**
 * get_bit - get bit value at a index
 * @n: number for bit extraction
 * @index: index to retrieve
 *
 * Return: bit at a given index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
