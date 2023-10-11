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
	size_t low, high, mid, bound, i;

	if (!array || size == 0)
		return (-1);

	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound - 1);
	low = bound / 2;
	high = (bound < size - 1) ? bound : size - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
