#include "search_algos.h"

/**
 * jump_list- searches for a value in a list of integers using jumpsearch
 * @list: linked list that is to be searched
 * @size: size of the linked list
 * @value: value to be searched for
 * Return: index of the value else -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t sqrtSize = 0, indexBeingChecked = 0;
	listint_t *head = list, *tail = list;

	if (!list || size == 0)
		return (NULL);
	sqrtSize += sqrt(size);
	indexBeingChecked += sqrtSize;
	while (tail)
	{
		if (tail->index == indexBeingChecked)
		{
			printf("Value checked at index [%lu] = [%d]\n", tail->index, tail->n);
			if (tail->n == value)
				return (tail);
			else if (tail->n > value)
				break;
			indexBeingChecked += sqrtSize;
		}
		if (tail->index == size - 1)
		{
			printf("Value checked at index [%lu] = [%d]\n", tail->index, tail->n);
			break;
		}
		tail =  tail->next;
	}
	while (head->index != indexBeingChecked - sqrtSize)
	{
		head = head->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			head->index, tail->index);

	while (head && head->index <= tail->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", head->index, head->n);
		if (head->n == value)
			return (head);
		head = head->next;
	}
	return (NULL);
}
