#include "search_algos.h"

/**
 * interpolation_search- a function that searches for a velue in a sorted array
 * @array: array of integers
 * @size: size of the array
 * @value: value being searched
 * Return: index of the value else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t high = size - 1;
	size_t low = 0;

	if (!array || size == 0 || !value)
		return (-1);

	pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

	while(1)
	{
		pos = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (pos >= high)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
