#include "main.h"

/**
 * print_triangle-prints a triangle
 * @size:size of triangle
 */
void print_triangle(int size)
{
	int rows, columns;
	int num = size;

	for  (rows = 0; rows <= size; rows++)
	{
		for (columns = 0; columns <= size; columns++)
		{
			if (columns == rows)
			{
				_putchar('#');
			}
			else if (columns == num)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
			num--;
		}
		_putchar('\n');
	}
}

