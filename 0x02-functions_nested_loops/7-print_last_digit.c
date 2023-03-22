#include "main.h"

/**
 * print_last_digit-last digit print out
 * @c:value to be manipulated
 * Return: last digit
 */
int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;

	if (last_digit < 0)
	{
		c = -c;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
