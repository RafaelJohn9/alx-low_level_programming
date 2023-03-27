#include "main.h"
#include <string.h>

/**
 * puts2-prints alternate numbers
 * @str:value to be manipulated
 */
void puts2(char *str)
{
	int limiter = 0;

	while (str[limiter] != '\0')
	{
		if (limiter % 2 == 0 || limiter == 0)
		{
			_putchar(str[limiter]);
			limiter++;
		}
		else
		{
			limiter++;
			continue;
		}
	}
	_putchar('\n');
}
