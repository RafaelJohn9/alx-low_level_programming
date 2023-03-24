#include "main.h"

/**
 * print_square-draws a square
 * @size: size of square
 */
void print_square(int size)
{
	int rows, column;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (column = 1; column <= size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
