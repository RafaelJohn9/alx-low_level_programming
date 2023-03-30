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
	sum_length = (len + (n - 1));
	for (i = (len_2 + 1); i < sum_length; i++)
	{
		dest[i] = src[a];
		a++;
	}
	dest[i] = '\n';
	dest[i +1] = '\0';
	return (dest);
}
