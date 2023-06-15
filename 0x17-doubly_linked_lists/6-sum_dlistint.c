#include "lists.h"

/**
 * sum_dlistint-prints all the elements of a dlistint_t list.
 * @head:ptr linked to list
 * Return:number of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
