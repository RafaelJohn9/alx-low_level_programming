#include "main.h"
#include <stdlib.h>

/**
 * _strdup-returns a ptr to a newly allocated space in memory
 * @str:value to be manipulated
 * Return:char
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *mem = malloc(sizeof(char) * sizeof(str));

	if (*str == '\0')
	{
		return (NULL);
	}
	for (i = 0; i <= sizeof(str); i++)
	{
		mem[i] = str[i];
	}
	return (mem);
}
