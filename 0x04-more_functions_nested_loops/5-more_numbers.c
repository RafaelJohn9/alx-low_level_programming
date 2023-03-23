#include "main.h"
/**
 * more_numbers-1-14 10 times
 */
void more_numbers(void)
{
	int num;
	int limiter = 1;
	int ones;
	int tens;

	while (limiter <= 10)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
			{
				tens = num / 10;
				_putchar('0' + tens);
			}
			ones = num % 10;
			_putchar('0' + ones);
		}
		_putchar('\n');
		limiter++;
	}
}
