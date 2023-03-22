#include "main.h"

/**
 * print_last_digit-last digit print out
 * @c:value to be manipulated
 * Return: last digit
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = -c;
	}
	c = c % 10;
	_putchar(c + '0');
	return (c);
}
