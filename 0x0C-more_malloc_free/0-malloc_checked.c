#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - A function that allocates memory
 * @b: Integer variable.
 *
 * Return: returns the pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
