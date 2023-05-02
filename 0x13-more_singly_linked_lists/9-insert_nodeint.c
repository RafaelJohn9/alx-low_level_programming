#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index-inserts a new node at a given positions
 * @head:ptr to a ptr
 * @idx:index
 * @n:new int
 * Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_num, *new, *ptr;
	unsigned int count = 0;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new_num = malloc(sizeof(listint_t));
	if (new_num == NULL)
	{
		return (NULL);
	}
	new_num->n = n;
	ptr = *head;
	ptr->next = new;
	new = (*head)->next;
	new = new->next;
	*head = (*head)->next;
	while (count < idx - 1)
	{
		new = *head;
		new->next = (*head)->next;
		new = new->next;
		*head = (*head)->next;
		count++;
	}
	new_num->next = (*head)->next;
	new->next = new_num;
	new = new->next;
	while (*head != NULL)
	{
		new = *head;
		new->next = (*head)->next;
		new = new->next;
		*head = (*head)->next;
	}
	return (ptr);
}
