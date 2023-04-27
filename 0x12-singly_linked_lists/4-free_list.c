#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t linked list.
 * @head: A pointer to the head of the list_t list.
 */
void free_list(list_t *head)
{
	list_t *element;

	while (head)
	{
		element = head;
		head = head->next;
		free(element->str);
		free(element);
	}
}
