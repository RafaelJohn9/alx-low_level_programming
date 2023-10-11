#include "search_algos.h"

/**
 * exponential_search- searches for a value in a sorted array
 * @array: array to be searched
 * @size: size of the array
 * @value: value to be searched for
 * Return: returns the index of the value else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, high = size - 1, low = 0, mid = 0;

	if (!array || !value || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]", array[0]);
		return (0);
	}
	for (i = 1; i < size; i *= 2)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] < value)
			continue;
		else if (array[i] == value)
		{
			return (i);
		}
		else
		{
			break;
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n", (i / 2), (i - 1));
	high = i - 1;
	low = i / 2;

	while (1)
	{
		printf("Searching in array: ");
		for (j = low; j <= high; j++)
		{
			printf("%d", array[j]);
			if (j != high)
				printf(", ");
		}
		printf("\n");
		if ((high - low + 1) <= 1)
		{
			if (array[high] == value)
				return (high);
			else
				return (-1);
		}
		mid = (high - low + 1) / 2;
		mid--;
		mid += low;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			low = mid + 1;
			continue;
		}
		else
		{
			high = mid - 1;
			continue;
		}
	}
	return (-1);
}
