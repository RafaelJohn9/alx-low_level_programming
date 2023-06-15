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
	dlistint_t *new_node, *current_node;

	if (!*h)
	{
		return (NULL);
	}
	current_node = *h;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	while (current_node != NULL)
	{
		if (count == idx)
		{
			if (current_node->prev && current_node->next)
			{
				(current_node->prev)->next = new_node;
				new_node->next = current_node;
				(current_node->next)->prev = new_node;
				return (*h);
			}
			else if (current_node->prev == NULL)
			{
				new_node->next = *h;
				(*h)->prev = new_node;
				*h = new_node;
				return (*h);

			}
			else if (current_node->next == NULL)
			{
				current_node->next = new_node;
				return (*h);
			}
		}
		current_node = current_node->next;
		count++;
	}
	return (NULL);
}
