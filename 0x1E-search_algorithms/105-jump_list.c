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
	size_t sqrtSize = 0, i = 0, indexBeingChecked = 0;
	listint_t *head, *tail;

	if (!list || size == 0)
		return (-1);

	while (tail)
	{
		if (tail->index == indexBeingChecked)
		{
			printf("Value checked at index at [%d] = [%d]", tail->index, tail->n);
			if (tail->n == value)
				return (indexBeingChecked);
			else if (tail->n > value)
				break;
			indexBeingChecked += sqrtSize;
		}
		if (tail->index == size - 1)
			break;
		tail =  tail->next;
	}
	while (head->index != indexBeingChecked - sqrtSize)
	{
		head = head->next;
	}
	printf("Value found between indexes [%d] and [%d]", head->index, tail->index);

	while (head->index <= tail->index)
	{
		if (head->n == value)
			return (head->index);
		head = head->next;
	}
	return (-1);
}
