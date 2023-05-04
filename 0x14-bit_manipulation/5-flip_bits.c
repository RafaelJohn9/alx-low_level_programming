#include "main.h"

/**
 * flip_bits-num of bits you would need to flip to get from one no to anoth
 * @n:num 1
 * @m:num to get to
 * Return:num of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int o = m ^ n;
	unsigned int i = 0;

	while (o)
	{
		if (o & 1)
		{
			i++;
		}
		o = o>>1;
	}
	return (i);
}
