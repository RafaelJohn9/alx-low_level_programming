#include "lists.h"
#include <stdlib.h>

/**
 * listint_len-shows number of elements
 *
 * @h:nodes
 * Return:size_t of number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
