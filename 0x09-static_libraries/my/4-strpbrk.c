#include "main.h"
#include <stddef.h>

/**
 * _strpbrk-writes a function that searches a string for any of a set of bytes
 * @s:where to be searched
 * @accept:character to be searched
 * Return:char type
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return (NULL);
}
