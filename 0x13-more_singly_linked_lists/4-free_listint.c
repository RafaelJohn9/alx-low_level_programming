#include <stdlib.h>
#include "lists.h"

/**
 * free_listint-function that frees listint_t
 * @head:list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *main;

	while (head != NULL)
	{
		main = head;
		head = head->next;
		free(main);
	}
}
