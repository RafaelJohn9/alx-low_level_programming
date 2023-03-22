#include "main.h"

/**
 * jack_bauer-hours or minutes
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
			{
				if (hours < 10 && minutes < 10)
				{
					_putchar('0');
					_putchar(hours);
					_putchar(':');
					_putchar('0');
					_putchar(minutes);
					_putchar('\n');
				}
				else if (hours < 10)
				{
					_putchar('0');
					_putchar(hours);
					_putchar(':');
					_putchar(minutes);
					_putchar('\n');
				}
				else if (minutes < 10)
				{
					_putchar(hours);
					_putchar(':');
					_putchar('0');
					_putchar(minutes);
					_putchar('\n');
				}
				else
				{
					_putchar(hours);
					_putchar(':');
					_putchar(minutes);
					_putchar('\n');
				}
			}
	}
}
