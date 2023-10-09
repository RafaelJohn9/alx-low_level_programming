#include "search_algos.h"

/**
 * linear_search- a function that searches for a value in an array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: the number of elements in an array
 * @value: is the value to search for
 * Return: index of the value being searched else -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!array)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array [%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
