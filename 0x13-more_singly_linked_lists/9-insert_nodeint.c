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
	listint_t *new_num, *current;
	unsigned int count = 0;

	new_num = malloc(sizeof(listint_t));
	while (new_num == NULL)
	{
		return (NULL);
	}
	current = malloc(sizeof(listint_t));
	while (current == NULL)
	{
		return (NULL);
	}
	new_num->n = n;
	current = *head;
	if (idx == 0)
	{
		new_num->next = *head;
		current = new_num;
		*head = current;
		return (*head);
	}
	while (count < (idx - 1))
	{
		if (current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
		count++;
	}
	new_num->next = current->next;
	current->next = new_num;
	return (*head);
}
