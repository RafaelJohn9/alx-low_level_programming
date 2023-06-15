#include "lists.h"

/**
 * get_dnodeint_at_index- returns the nth node of a dlistint_t linked list.
 * @head:header from list
 * @index:index to enter
 * Return:the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *node;

	if (head == NULL)
	{
		return NULL;
	}
	node = head;
	while (node != NULL)
	{
		if (count == index)
		{
			return node;
		}
		node = node->next;
		count++;
	}
	return (NULL);
}
