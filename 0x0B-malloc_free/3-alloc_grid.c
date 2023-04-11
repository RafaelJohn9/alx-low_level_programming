#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid-returns a ptr to a 2d array of integers
 * @width:array width
 * @height:array height
 */
int **alloc_grid(int width, int height);
{
	char *mem = malloc(sizeof(width * height));
	char i;

	for (i = 0; i < 
