#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * strtow - concatenates arguments of a function
 * @str: String to be splits
 *
 * Return: a pointer to the array of string
 */

char **strtow(char *str)
{
	char *array = NULL;
	unsigned int i = 0, j = 0, k;

	if (strncmp(str, "", 1) || str == NULL)
		return (NULL);
	array = malloc((i + j + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		array[k] = str[k];
	i = k;
	for (k = 0; k < j; k++)
	{
		array[i] = str[k];
		i++;
	}
	array[i] = '\0';
	return (NULL);
}
