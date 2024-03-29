#include "main.h"

/**
 * *_strncat-concatenates two str
 * @dest:destination
 * @src:string 2
 * @n:how much bytes
 * Return:concatenated str
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i;
	int a = 0;
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

	if (n > len)
	{
		n = len;
	}
	sum_length = (len_2 + (n + 1));
	for (i = (len_2); i < sum_length - 1; i++)
	{
		dest[i] = src[a];
		a++;
	}
	dest[i] = '\0';
	return (dest);
}
