#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid-returns a ptr to a 2d array of integers
 * @width:array width
 * @height:array height
 * Return:array of int
 */
int **alloc_grid(int width, int height)
{
	int **mem;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mem = malloc(sizeof(width * height));
	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			mem[i][j] = 0;
		}
	}
	free(mem);
	return (mem);
}
