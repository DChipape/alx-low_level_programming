#include <unistd.h>

/*
 * _putchar - writer character c to the stdout
 * @c: character to be printed
 *
 * Return: on success 1, on error -1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
