#include "main.h"
#include <stdio.h>

/**
 * print_diagsums-adds and prints out sum of diagonals of matrices
 * @a:array
 * @size:array size
 */
void print_diagsums(int *a, int size)
{
	int row;
	int column;
	int sum_1 = 0;
	int sum_2 = 0;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			if (row == column)
			{
				sum_1 += *(a + row * size + column);
			}
			else if (row + column == size - 1)
			{
				sum_2 += *(a + row * size + column);
			}
		}
	}
	printf("%d, %d\n", sum_1, sum_2);
}
