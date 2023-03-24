#include "main.h"
/**
 * print_line-prints a line
 * @n:limiter
 */
void print_line(int n)
{
	int num;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
