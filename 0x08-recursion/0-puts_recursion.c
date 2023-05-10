#include "main.h"

/**
 * _puts_recursion - print a string, followed by new line
 * @s: string to be printed
 *
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}

	else
		_putchar('\n');
}
