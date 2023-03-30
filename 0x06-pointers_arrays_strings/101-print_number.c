#include "main.h"

/**
 * print_number-prints number
 * @n:number
 */
void print_number(int n)
{
	int num;
	int divisor = 1;


	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while ((n / divisor) > 9)
	{
		divisor *= 10;
	}
	while (divisor != 0)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}
	if (n == 0)
	{
		_putchar('0');
	}
}
