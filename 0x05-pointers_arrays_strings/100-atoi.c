#include "main.h"

/**
 * _atoi-turns strings to int
 * @s:value to be manipulated
 * @Return:returns number in int form
 */
int _atoi(char *s)
{
	int num = 0;
	int a = 0;
	char b[];

	while (s[num] != '\0')
	{
		if (s[num] == '-')
		{
			*(b + a) = s[num];
			return (b);
		}
		else if (s(num) == '+')
		{
			*(b + a ) = s[num];
			return (b);
		}
		else if (s[num] >= 48 && s[num] <= 57)
		{
			*(b + a) = s[num];
			return (b);
		}
		else
		{
			continue;
		}
		a++;
		num++;
	}
	*(b + ++a) = '\0';
	return (0);
}
