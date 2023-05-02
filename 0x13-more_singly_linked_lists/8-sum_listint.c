#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint-adds valuses in nodes
 * @head:node
 * Return:sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
