#include "main.h"

/**
 * print_diagonal-prints a diagonal diagonally
 * @n:limiter
 */
void print_diagonal(int n)
{
	int num, a;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (num = 0; num < n; num++)
		{
			for (a = 0; a <= num; a++)
			{
				if (a == num)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
