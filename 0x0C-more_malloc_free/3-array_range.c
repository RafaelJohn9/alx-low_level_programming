#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range- write a functon that creates an array of integers
 * @min:the most minimum integer
 * @max:the most maximum integer
 * Return:array of int
 */
int *array_range(int min, int max)
{
	int *mem;
	int net ,i;
	int j = 0;

	if (min > max)
	{
		return (NULL);
	}
	net = max - min;
	mem = malloc((sizeof(int) * net) + 1);
	if (mem == NULL)
	{
		return (NULL);
	}
	for ( i = min; i <= max; i++, j++)
	{
		mem[j] = i;
	}
	return (mem);
}
