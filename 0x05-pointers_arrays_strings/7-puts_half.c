#include "main.h"
#include <string.h>

/**
 * puts_half-prints half the v7-puts_half value
 * @str:valu to be taken half from
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int len_2 = len;
	int half_len;
	int n;

	if (len % 2 == 0)
	{
		half_len = len / 2;
	}
	else
	{
		half_len = (len / 2) + 1;
	}

	n = half_len + 1;
	
	for (n = half_len ; n < len_2; n++)
	{
		_putchar(str[n]);
	}
}
