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
	int limiter;

	while (limiter != '\0')
	{
		dest[limiter] = src[limiter];
		limiter++
	}
	return (dest);
}
