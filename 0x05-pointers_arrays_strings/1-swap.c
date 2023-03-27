#include "main.h"
#include <stdio.h>

/**
 * swap_int-swaps teo integers
 * @a:first integer
 * @b:second integer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
