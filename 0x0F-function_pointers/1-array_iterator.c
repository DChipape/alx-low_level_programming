#include <stddef.h>
/* defines size_t */

/**
 * array_iterator - execute function on an array through ptr function
 * @array: array
 * @size: size of an array
 * @action: pointer to function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* match data type */

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
