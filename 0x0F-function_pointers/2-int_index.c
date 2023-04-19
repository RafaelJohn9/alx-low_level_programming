#include "function_pointers.h"

/**
 * int_index-a function that searches for an int
 * @array:array to be checked
 * @size:size
 * @cmp:function ptr
 * Return:int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ans;

	if (!array || !cmp)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		ans = cmp(array[i]);
		if (ans == 1)
		{
			return (i);
		}
		else if (ans == 0 && i < size)
		{
			continue;
		}
		else
		{
			return (-1);
		}
	}
	return (-1);
}
