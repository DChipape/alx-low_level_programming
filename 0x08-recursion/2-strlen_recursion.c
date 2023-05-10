#include "main.h"

/**
 * _strlen_recursion - Returns a string length
 * @s: the string to be measured
 *
 * Return: the string length.
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
