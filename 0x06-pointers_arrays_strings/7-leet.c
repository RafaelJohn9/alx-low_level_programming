#include "main.h"

/**
 * leet-checks and replaces a,e,o,t,l
 * @str:value to be checked
 * Return:return value
 */
char *leet(char *str)
{
	int len = 0;
	int a;

	while (str[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < len; a++)
	{
		if (str[a] ==  'a' || str[a] == 'A')
		{
			str[a] = '4';
		}
		else if (str[a] == 'e' || str[a] == 'E')
		{
			str[a] = '3';
		}
		else if (str[a] == 'o' || str[a] == 'O')
		{
			str[a] = '0';
		}
		else if (str[a] == 't' || str[a] == 'T')
		{
			str[a] = '7';
		}
		else if (str[a] == 'l' || str[a] == 'L')
		{
			str[a] = '1';
		}
		else
		{
			continue;
		}
	}
	return (str);
}
