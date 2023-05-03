#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2-functions that frees listint_t
 * @head:ptr 2 ptr
 */
void free_listint2(listint_t **head)
{
	listint_t *main;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		main = *head;
		*head = (*head)->next;
		free(main);
	}
	*head = NULL;
}
