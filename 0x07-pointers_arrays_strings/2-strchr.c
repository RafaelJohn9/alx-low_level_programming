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
	int a = 0;

	if (c == 0)
	{
		while (s[a] != '\0')
		{
			a++
		}
		return (s + a); 
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
