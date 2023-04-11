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
	char *mem;
	int len = 0;

	if (*str == 0)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	mem = malloc((sizeof(char) * len) + 1);
	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		mem[i] = str[i];
	}
	mem[i] = '\0';
	return (mem);
}
