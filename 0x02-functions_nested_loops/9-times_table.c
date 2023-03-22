#include "main.h"
/**
 * times_table-till 9
 */
void times_table(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10 ; num2++)
		{
			int total = num1 * num2;

			if (total < 10)
			{
				_putchar(' ');
				_putchar('0' + total);
			}
			else
			{
				_putchar('0' + total / 10);
				_putchar('0' + total % 10);
			}
			if (num2 == 9)
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
}
