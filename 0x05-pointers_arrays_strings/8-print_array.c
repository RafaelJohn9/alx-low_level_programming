#include "main.h"
#include  <stdio.h>

/**
 * print_array-gives an array of n values
 * @a:array
 * @n:limiter
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b <= n; b++)
	{
		printf("%d", a[n]);
		_putchar(',');
		_putchar(' ');
	}
}
