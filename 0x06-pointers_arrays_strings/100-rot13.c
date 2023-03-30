#include "main.h"
/**
 * rot13-enciphering using an after 13th word
 * @str:value to be manipulated
 * Return:cipherd text
 */
char *rot13(char *str)
{
	int limiter;
	int len_str = 0;
	int n;
	
	while (str[len_str] != '\0')
	{
		len_str++;
	}

	for (limiter = 0; limiter < len_str; limiter++)
	{
		if (str[limiter] >= 'a' && str[limiter] <= 'z')
		{
			if (str[limiter] > 'm')
			{
				n = 13 + str[limiter];
				n = n - 26;
				str[limiter] = 'a' + (n);
			}
			else
			{
				str[limiter] = str[limiter] + 13;
			}
		}
		else if (str[limiter] >= 'A' && str[limiter] <= 'Z')
		{
			if (str[limiter] > 'M')
			{
				n = 13 + str[limiter];
				n = n - 26;
				str[limiter] = 'a' + n;
			}
			else
			{
				str[limiter] = str[limiter] + 13;
			}
		}
		else
		{
			continue;
		}
	}
	return (str);
}
