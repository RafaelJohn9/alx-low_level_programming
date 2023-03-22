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
	int last_digit = c % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
