#include "main.h"

/**
 * is_prime_number-prints prime number
 * @n:value 
 * Return:answer
 */
int is_prime_number(int n)
{
	if (n == 1 || n == -1)
	{
		return (0);
	}
	else if (n % 2 == 0)
	{
		return (0);
	}
	else if (n % 3 == 0)
	{
		return (0);
	}
	else if (n % 5 == 0)
	{
		return (0);
	}
	else if (n % 7 == 0)
	{
		return (0);
	}
	else 
	{
		return (1);
	}
}
