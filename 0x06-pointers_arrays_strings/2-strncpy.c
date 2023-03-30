#include "main.h"

/**
 * _strncpy-copies specific bytes
 * @dest:destination
 * @src: from here
 * @n: no of bytes
 * Return:dest after copying
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int len_src = 0;

	while (src[len_src] != '\0')
	{
		len_src++;
	}


	for (i = 0; i < n; i++)
	{
		if (len_src < n)
		{
			if (i > len_src)
			{
				dest[i] = '\0';
			}
			else
			{
				dest[i] = src[i];
			}
		}
		else
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
