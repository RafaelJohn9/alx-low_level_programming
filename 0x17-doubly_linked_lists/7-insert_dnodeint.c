#include "lists.h"

/**
 * insert_dnodeint_at_index-inserts a new node at a given position.
 * @h:pointer to a pointer to a node struct
 * @idx:index
 * @n:num to insert
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node, *iterator;

	if (!*h)
	{
		return NULL;
	}
	iterator = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return NULL;
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	while (iterator != NULL)
	{
		if (count == idx)
		{
			if (iterator-> prev && iterator->next)
			{
				(iterator->prev)->next = new_node;
				new_node->next = iterator;
				(iterator->next)->prev = new_node;
				return (*h);
			}
			else if (iterator->prev == NULL)
			{
				new_node->next = *h;
				(*h)->prev = new_node;
				*h = new_node;
				return (*h);

			}
			else if (iterator->next == NULL)
			{
				iterator->next = new_node;
				return (*h);
			}
		}
		iterator = iterator->next;
		count++;
	}
	return NULL;
}
