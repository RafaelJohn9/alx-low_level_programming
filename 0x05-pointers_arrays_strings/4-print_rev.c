#include "main.h"
#include <string.h>

/**
 * print_rev-prints reverse
 * @s:value to be manipulated
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
}
