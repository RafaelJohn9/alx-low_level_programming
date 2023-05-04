#include "main.h"

/**
 * get_bit-function that returns the value of a bit at a given index
 * @n:num
 * @index:index to look at
 * Return: int type
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index)
	{
		n = n>>1;
		get_bit(n, index - 1);
	}
	if (n & 1)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
