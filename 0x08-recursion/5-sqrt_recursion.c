#include "main.h"

/**
 * _sqrt_recursion-returns the natural square root of a number
 * @n:value 1
 * Return:prints answer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n % 4 == 0)
	{
		return (2 * _sqrt_recursion(n / 4));
	}
	else if (n % 9 == 0)
	{
		return (3 * _sqrt_recursion(n / 9));
	}
	else if (n % 25 == 0)
	{
		return (5 * _sqrt_recursion(n / 25));
	}
	else if (n % 49 == 0)
	{
		return (7 * _sqrt_recursion(n / 49));
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
