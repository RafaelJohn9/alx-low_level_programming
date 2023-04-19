#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator-a function given as a parameter on each element of an array
 * @array:array to be checked
 * @size:size of the array
 * @action:a ptr to the function you need to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL)
	{
		return;
	}
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
