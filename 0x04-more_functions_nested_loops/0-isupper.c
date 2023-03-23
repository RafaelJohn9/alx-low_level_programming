#include "main.h"

/**
 * _isupper-searches for upper case letters
 * @c:value to be searched if alpha
 * Return: 1 if True else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
