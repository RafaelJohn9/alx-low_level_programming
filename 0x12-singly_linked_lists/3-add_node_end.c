#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a list
 * @head: ptr to head node
 * @str: string to be added to new node
 *
 * Return: pointer to new node, or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_1, *node_2;
       
	if (str == NULL)
	{
		return (NULL);
	}
	node_1 = malloc(sizeof(list_t));
	if (node_1 == NULL)
	{
		return (NULL);
	}
	node_1->str = strdup(str);
	if (node_1->str == NULL)
	{
		free(node_1);
		return (NULL);
	}
	node_1->len = strlen(str);
	node_1->next = NULL;
	if (*head == NULL)
	{
		*head = node_1;
	}
	else
	{
		node_2 = *head;
		while (node_2->next != NULL)
		{
			node_2 = node_2->next;
		}
		node_2->next = node_1;
	}
	return (node_1);
}
