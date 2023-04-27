#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node-adds a node at the beginning of a list_t
 * @head:double ptr head
 * @str:single ptr to str to be added
 * Return:node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *string;
	list_t *element;

	if (str == NULL)
	{
		return (NULL);
	}
	string = malloc(strlen(str) + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	element = malloc(sizeof(list_t));
	if (element == NULL)
	{
		free (string);
		return (NULL);
	}
	string = strdup(str);
	element->str = string;
	element->len = strlen(string);
	element->next = *head;
	*head = element;
	return (element);
}
