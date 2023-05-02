#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index-deletes node at a certain index
 * @head:double ptr
 * @index:the index
 * Return:1 succesful -1 not succesful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *ptr;
	unsigned int count = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (-1);
	}
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (-1);
	}
	node = *head;
	if (index == 0)
	{
		*head = node;
		*head = (*head)->next;
		free(node);
		return (1);
	}
	while (count < (index - 1))
	{
		node = node->next;
		count++;
	}
	node->next = ptr;
	node->next = ptr->next;
	return (1);
}
