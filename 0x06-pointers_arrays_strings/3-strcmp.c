#include "main.h"

/**
 * _strcmp-compares two strings
 * @s1:value of input 1
 * @s2:value of input 2
 * Return:net value of their differences
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
