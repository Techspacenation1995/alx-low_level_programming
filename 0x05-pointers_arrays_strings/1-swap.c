#include "main.h"

/**
 * swap_int - A function that swaps the value of two integer.
 * @a: First parameter
 * @b: Second parameter
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
