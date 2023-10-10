#include "search_algos.h"

/**
 * jump_search- searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array of to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index of the value in array else -1
 */
int jump_search(int *array, size_t size, int value)
{
	int sqrtSize = 0;
	int i = 0, j = 0;

	if (!array || size == 0)
		return (-1);

	sqrtSize = sqrt(size);

	for (i = 0; i < (int)size; i += sqrtSize)
	{
		if (array[i] < value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			continue;
		}
		else if (array[i] >= value)
		{
			break;
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", (i - sqrtSize), i);
	for (j = (i - sqrtSize); j <= i; j++)
	{
		if (j > ((int)size - 1))
			return (-1);

		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
		{
			return (j);
		}
	}
	return (-1);
}
