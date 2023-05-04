#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint-a function that converts a binary number to an unsigned int
 * @b:value
 * Return:0 or number(if everything goes as expected
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int j = 0, len = 0, i, num;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
	{
		len++;
	}
	len--;
	for (j = 0; len >= 0; len--, j++)
	{
		if (b[len] == '0' || b[len] == '1')
		{
			i = j;
			num = 1;
			if (b[len] == '1')
			{
				if (i == 0)
				{
					sum++;
					continue;
				}
				while (i > 0)
				{
					num *= 2;
					i--;
				}
				sum += num;
			}
			else
			{
				continue;
			}
		}
		else
			return (0);
	}
	return (sum);
}
