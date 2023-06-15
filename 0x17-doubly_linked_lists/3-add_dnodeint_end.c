#include "lists.h"

/**
 * add_dnodeint_end-adds a new node at the end of a dlistint_t list
 * @head:pointer to pointer to a dlistint_t list
 * @n:value to input
 * Return:a dlistint_t list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *iterator;

	node = malloc(sizeof(dlistint_t));
	node->n = n;
	node->prev = NULL;
	node->next = NULL;
	iterator = *head;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (iterator->next != NULL)
	{
		iterator = iterator->next;
	}
	node->prev = iterator;
	iterator->next = node;
	return (*head);
}
