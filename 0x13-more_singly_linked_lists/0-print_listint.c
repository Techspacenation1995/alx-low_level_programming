#include <stdio.h>
#include "lists.h"

/**
 * print_listint - A function that prints the elment of a singly list.
 * @h: A pointer to a structure.
 *
 * Return: the number of nodes in the string.
 * @return size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
