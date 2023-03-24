#include "main.h"

/**
 * print_triangle-prints a triangle
 * @size:size of triangle
 */
void print_triangle(int size)
{
	int rows, columns;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for  (rows = 1; rows <= size; rows++)
		{
			for (columns = 1; columns <= size - rows; columns++)
			{
				_putchar(' ');
			}
			for (columns = 1; columns <= rows; columns++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
