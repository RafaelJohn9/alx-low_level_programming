#include "main.h"

/**
 * _islower- 1 if lower case else 0
 * @c: checked value if lowercase or not
 * Return: 1 if TRUE else 0
 */

int _islower(int c)
{
	if (c < 97 || c > 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
