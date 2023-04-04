#include "main.h"
#include <stddef.h>

/**
 * _strchr-locates a character in a str
 * @s:string
 * @c:first occurrence of the chararcter
 * Return:returns first occurrence
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (c == NULL)
	{
		return (NULL);
	}
	return (NULL);
}
