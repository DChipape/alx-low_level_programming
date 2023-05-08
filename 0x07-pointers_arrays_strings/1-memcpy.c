#include "main.h"
/**
 *_memcpy - Function that copies area of a memory
 *@dest: Memory where TO store
 *@src: Memory where it is copied
 *@n: Bytes number
 *
 *Return: Copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
