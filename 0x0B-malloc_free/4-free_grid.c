#include "main.h"
#include <stdlib.h>

/**
 * free_grid-frees alloc_grid above
 * @grid:array grid
 * @height:array height
 */
void free_grid(int **grid, int height)
{
	int i ,j;

	for (i = 0; i <  height; i++)
	{
		for ( j = 0; j < grid; j++)
		{
			free(alloc_grid[j]);
		}
			free(alloc_grid[i]);
	}
	return(0);
}
