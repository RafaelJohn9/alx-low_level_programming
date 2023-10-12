#include "search_algos.h"

/**
 * binary_search- a function that searches for a value using binary search
 * @array: array to be searched
 * @size: size of the array
 * @value: the value to be searched
 * Return: the index of the value else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	if (!array || size == 0 || !value)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
