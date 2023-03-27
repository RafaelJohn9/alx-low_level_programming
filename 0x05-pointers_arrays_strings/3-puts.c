#include "main.h"

/**
 * _puts-prints out a string
 * @str:string to be printed
 */
void _puts(char *str)
{
	int limiter = 0;

	while (str[limiter] != '\0')
	{
		_putchar(str[limiter]);

		limiter++;
	}
	_putchar('\n');
}
