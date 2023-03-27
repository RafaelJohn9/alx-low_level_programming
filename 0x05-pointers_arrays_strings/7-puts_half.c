#include "main.h"
#include <string.h>

/**
 * puts_half-prints half the v7-puts_half value
 * @str:valu to be taken half from
 */
void puts_half(char *str)
{
	int len = strlen(str);

	int n = (len - 1) / 2;
	int half_len = len / 2;

	while (len >= 0)
	{

		if (len > half_len && len % 2 == 0)
		{
			_putchar(str[half_len]);
		}
		else
		{
			continue;
		}
		len--;
		half_len++;

	}
	_putchar('\n');
}
