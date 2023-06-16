#include "lists.h"

/**
 * delete_dnodeint_at_index- deletes the nth node.
 * @head:header from list
 * @index:index to enter
 * Return:1 if succeful else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *node;

	if (*head == NULL)
	{
		return (-1);
	}
	node = *head;
	while (node != NULL)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(node);
			return (1);
		}
		if (count == index)
		{
			if (node->next)
			{
				(node->prev)->next = node->next;
				(node->next)->prev = node->prev;
			}
			else
			{
				(node->prev)->next = NULL;
			}
			free(node);
			return (1);
		}
		node = node->next;
		count++;
	}
	return (-1);
}
