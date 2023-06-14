#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array.
 * @size: Number of arrays passed.
 * @c: Charcter parameter.
 *
 * Return: A pointer to a character.
 */

char *create_array(unsigned int size, char c)
{
	char *ptrArray;
	unsigned int count;

	if (size == 0)
	{
		return (NULL);
	}

	ptrArray = malloc(size * sizeof(char));

	if (ptrArray == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < size; count++)
	{
		ptrArray[count] = c;
	}
	return (ptrArray);
}
