#include "main.h"
#include <stdlib.h>

/**
 * free_grid-frees alloc_grid above
 * @grid:array grid
 * @height:array height
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <  height; i++)
	{
			free(grid[i]);
	}
	free(grid);
}
