#include "main.h"
#include <string.h>

/**
 * *_strcpy-copies
 * @dest:shows destination
 * @src:shows file to be copied
 * Return:string
 */
char *_strcpy(char *dest, char *src)
{
	int len = strlen(src);
	int limiter;

	for (limiter = 0; limiter <= len; limiter++)
	{
		dest[limiter] = src[limiter];
	}
	return (dest);
}
