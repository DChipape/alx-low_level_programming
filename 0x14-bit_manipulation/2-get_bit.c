#include "main.h"

/**
 * get_bit - returns a value of bit
 * @n: the number with bit inside
 * @index: a bit index to be retrieved
 * Return: bit number, or -1 for error
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

