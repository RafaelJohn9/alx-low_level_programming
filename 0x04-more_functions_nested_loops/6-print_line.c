#include "main.h"
/**
 * print_line-prints a line
 * @n:limiter
 */
void print_line(int n)
{
	int num;

	for (num = 0; num <= n; num++)
	{
		if (num <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('-');
		}
	}
}
