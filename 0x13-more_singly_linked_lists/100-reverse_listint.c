#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint-reverses a listint linked list
 * @head:ptr to ptrs
 * Return:reversed listint
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node_1, *node_2;

	node_1 = *head;
	while (node_1 != NULL)
	{
		node_1 = (*head)->next;
		(*head)->next = NULL;
		node_2 = *head;
		*head = (*head)->next;
	}
	return (node_2);
}
