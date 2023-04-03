#include  "main.h"

/**
 * _memset- fills memory with a constant bite
 * @s:what to be added
 * @b:source or what to be added
 * @n:number of bytes
 * Return:pointer of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < (int)n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
