#include "lists.h"

/**
 * add_dnodeint-adds a new node at the beginning of a dlistint_t list.
 * @head:ptr to a ptr of a linked list
 * @n:int to enter in a node
 * Return: head to double linked list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	/* initializes node */
	node = malloc(sizeof(dlistint_t));
	/* checks for successful initialisation */
	if (!node)
	{
		return (NULL);
	}
	node->prev = NULL;
	node->next = NULL;
	if (*head != NULL)
	{
		(*head)->prev = node;
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
