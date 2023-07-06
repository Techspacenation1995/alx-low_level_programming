#include "lists.h"
#include <stdlib.h>

#include <stddef.h>

/**
 * add_nodeint - This function ad  a node at the begining
 * of a singly linked list
 * @head: A pointer to the struct node at begining
 * @n: Data passed ito the first node.
 *
 * Return: the addresss of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
