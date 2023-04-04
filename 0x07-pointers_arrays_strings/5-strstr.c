#include "main.h"

/**
 * _strstr-locates a substring
 * @haystack:haystack
 * @needle:needle to be found
 * Return:returns char type
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;
	int len = 0;

	while (haystack[a] != '\0')
	{
		while (needle[b] == haystack[a])
		{
			b++;
		}
		a++;
	}
	while (needle[len] != '\0')
	{
		len++;
	}
	if ( b == (len -1))
	{
		return (needle);
	}
	return ('\0');
}
