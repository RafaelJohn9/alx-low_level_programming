#include "main.h"
#include <stddef.h>

/**
 * _strcat- concatenates to strings
 * @dest:destination
 * @src:secomd string
 * Return:string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i;
	int n = 0;
	int len_2 = 0;
	int sum_length;

	while (src[len] != '\0')
	{
		len++;
	}

	while (dest[len_2] != '\0')
	{
		len_2++;
	}

	sum_length = (len + len_2);
	dest[len_2] = '\0';

	for (i = (len_2); i < sum_length; i++)
	{
		dest[i] = src[n];
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
