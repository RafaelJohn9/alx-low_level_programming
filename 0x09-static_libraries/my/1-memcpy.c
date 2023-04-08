#include "main.h"

/**
 * _memcpy-copies specific bytes to dest array
 * @dest:it is the destination
 * @src:it is the sourcee file
 * @n:specified no of array items
 * Return:char type str
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (int)n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
