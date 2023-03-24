#include "main.h"

/**
 * print_times_table- print times table to the value of n
 * @n:limiter
 */
void print_times_table(int n)
{
	int limiter_1, limiter_2, total;

	for (limiter_1 = 0; limiter_1 <= n; limiter_1++)
	{
		for (limiter_2 = 0; limiter_2 <= n; limiter_2++)
		{
			total = limiter_1 * limiter_2;
			if (total >= 100)
			{
				_putchar('0' + total / 100);
				_putchar('0' + total / 100);
				_putchar('0' + total % 10);
			}
			else if (total >= 10)
			{
				_putchar('0' + total / 10);
				_putchar('0' + total % 10);
			}
			else if (total < 10)
			{
				_putchar('0' + total);
			}
			else
			{
				continue;
			}
			if (limiter_2 == n)
			{
				continue;
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
