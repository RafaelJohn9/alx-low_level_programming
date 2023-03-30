#include "main.h"
#include <stdlib.h>

/**
 * reverse_array- reverses content of an array
 * @a:int type
 * @n:no of elements to be reversed
 */
void reverse_array(int *a, int n)
{
	int b = 0;
	int c = n - 1;
	int *array = malloc(sizeof(int) * n);

	while (c >= 0)
	{
		array[b] = a[c];
		c--;
		b++;
	}
	c = 0;
	while (c < n)
	{
		a[c] = array[c];
		c++;
	}
}
