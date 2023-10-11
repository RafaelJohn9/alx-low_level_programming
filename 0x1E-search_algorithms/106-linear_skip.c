#include "search_algos.h"

/**
* linear_skip - searches for a value in a sorted skip list
* @list: ptr to the list head
* @value: int value being searched for
*
* Return: a ptr to the node with the value
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	if (!list)
		return (NULL);

	skiplist_t *express = list;
	size_t last_index = 0;
	skiplist_t *current;

	while (express->express && express->n < value)
	{
		last_index = express->index;
		express = express->express;
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	last_index, express->index);

	current = list;
	while (current->index < last_index)
		current = current->next;

	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
