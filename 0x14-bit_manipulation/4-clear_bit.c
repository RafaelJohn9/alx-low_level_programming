#include "main.h"

/**
 * clear_bit-sets the values of a bit to 0 at a given index
 * @n:number
 * @index:binary index
 * Return:always 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n = *n & ~(1UL << index);
	return (1);
}
