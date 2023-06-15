#include "lists.h"

/**
 * free_dlistint- that frees a dlistint_t list.
 * @head:head of dlistint
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
