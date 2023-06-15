#include "lists.h"

/**
 * dlistint_len- a function that prints all the elements of a dlistint_t list.
 * @h:ptr linked to list
 * Return:number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
