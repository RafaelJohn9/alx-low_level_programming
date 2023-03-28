#include "main.h"

/**
 * _atoi-turns strings to int
 * @s:value to be manipulated
 * @Return:returns number in int form
 */
int _atoi(char *s)
{
	int num;

	while (s != 0)
	{
		num = s % 10;
		s = s / 10;
		return (num);
	}
}
