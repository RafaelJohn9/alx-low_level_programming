#include "main.h"
#include <stdlib.h>

/**
 * _atoi-turns strings to int
 * @s:value to be manipulated
 * @Return:returns number in int form
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	char b[100];
	int result = 0;
	int a = 0;

	while (s[num] != '\0')
	{
		if (s[num] == '-')
		{
			sign = -1;
			num++;
		}
		else if (s[num] == '+')
		{
			num++;
		}
		else if (s[num] >= '0' && s[num] <= '9')
		{
			b[a] = s[num];
			a++;
			num++;
		}
		else
		{
			num++;
		}
	}
	for (int i = 0; i < a; i++)
	{
		result = result * 10 + (b[i] - '0');
	}
	return (sign * result);
}
