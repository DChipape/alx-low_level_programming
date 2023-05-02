#include "main.h"

/**
* swap_int-Swaps the values of 2 integers
* @a:First integer to be swapped
* @b:second integer to be swapped
*/

void swap_int(int *a, int *b)
{
	int p = *a;
	*a = *b;
	*b = p;
}
