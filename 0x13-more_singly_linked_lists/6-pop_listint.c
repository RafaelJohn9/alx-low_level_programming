#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint-deletes the head node of a listint_t linked list
 * @head:ptr 2 ptr
 * Return:deleted node data
 */
int pop_listint(listint_t **head)
{
	int a;
	listint_t *num;

	if (*head == NULL)
	{
		return (0);
	}
	a = (*head)->n;
	num = *head;
	*head = (*head)->next;
	if (*head == NULL)
	{
		return (0);
	}
	free(num);
	return (a);
}
