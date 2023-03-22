#include "main.h"
/**
 * jack_bauer-hours or minutes
 */
void jack_bauer(void)
{
	int hours, hour_1, hour_2,  minutes, minute_1, minute_2;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
			{
				hour_1 = hours / 10;
				hour_2 = hours % 10;
				minute_1 = minutes / 10;
				minute_2 = minutes % 10;
				if (hours < 10 && minutes < 10)
				{
					_putchar('0' + hour_1);
					_putchar(hour_2 + '0');
					_putchar(':');
					_putchar('0'+ minute_1);
					_putchar(minute_2 + '0');
					_putchar('\n');
				}
				else if (hours < 10 || minutes < 10)
				{
					_putchar(hour_1 + '0');
					_putchar(hour_2 + '0');
					_putchar(':');
					_putchar(minute_1 + '0');
					_putchar(minute_2 + '0');
					_putchar('\n');
				}
				else
				{
					_putchar(hour_1 + '0');
					_putchar(hour_2 + '0');
					_putchar(':');
					_putchar(minute_1 + '0');
					_putchar(minute_2 + '0');
					_putchar('\n');
				}
			}
	}
}
