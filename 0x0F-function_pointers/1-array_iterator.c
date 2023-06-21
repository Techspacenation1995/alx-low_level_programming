#include "function_pointers.h"

/**
 * array_iterator - A function that iterates an array number.
 * @array: Array name
 * @size_t size: The number of values passed into the array
 *
 * Return: Result at the end of the execution
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
		for(i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
