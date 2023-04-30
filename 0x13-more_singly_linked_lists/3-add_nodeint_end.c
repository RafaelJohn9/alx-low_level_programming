#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end-adds a new node at the end of the list
 * @head:ptr to head
 * @n:num to be added
 * Return:always 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *num, *ptr;

	num = malloc(sizeof(listint_t));
	while (num == NULL)
	{
		return (NULL);
	}
	num->n = n;
	num->next = NULL;
	if (*head == NULL)
	{
		*head = num;
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = num;
	}
	return (num);
}
