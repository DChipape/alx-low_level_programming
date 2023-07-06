#include "main.h"

/**
 * get_endianness - checks the system endiannes
 * Return: 0 for big endian, 1 for little
 */

int get_endianness(void)
{
int n = 0x00000001;
	char *c = (char *)&n;

	return (c[0]);
}

