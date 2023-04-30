#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint-adds a new node at the beginning of a ;istint_t list
 * @head:list node
 * @n:number to be added
 * Return:always 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *num;

	num = malloc(sizeof(listint_t));
	if (num == NULL)
	{
		return (NULL);
	}
	num->n = n;
	num->next = *head;
	*head = num;
	return (num);
}
