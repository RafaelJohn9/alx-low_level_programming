#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint-reverses a listint linked list
 * @head:ptr to ptrs
 * Return:reversed listint
 */
listint_t *reverse_listint(listint_t **head)
{
	listint *node_1 = NULL, *node_2 = NULL;

	node_1 = *head;
	while (node_1 != NULL)
	{
		node_1 = (*head)->next;
		(*head)->next = node_2;
		node_2 = *head;
		*head = node_1;
	}
	return (prev);
}
