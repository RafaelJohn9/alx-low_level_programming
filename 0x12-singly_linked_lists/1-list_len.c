#include "lists.h"
#include <stdlib.h>

/**
 * list_len-returns the number of elemnts in a linked list_t lists
 * @h:list_t
 * Return:number of element
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
