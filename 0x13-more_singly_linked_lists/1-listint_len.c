#include <stdio.h>
#include "lists.h"

/**
 * listint_len - A function that returns the number of elements
 * @h: A pointer to a structure.
 *
 * Return: the number of nodes in the string.
 * @return size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
