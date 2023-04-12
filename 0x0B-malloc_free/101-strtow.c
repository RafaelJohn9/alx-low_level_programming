#include "main.h"
#include <stdlib.h>

/**
 * strtow-splits sttring into words
 * @str:string to be splitted
 * Return: splitted str
 */
char **strtow(char *str)
{
	int len, i, j, k, num = 0;
	int l = 0;
	char **mem;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ')
		{
			num++;
		}
	}
	mem = malloc(sizeof(char *) * num + 1);
	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < num; i++)
	{
		len = 0;
		while (str[l] == ' ')
		{
			l++;
		}
		k = l;
		while (str[k] != ' ')
		{
			len++;
			k++;
		}
		mem[i] = malloc(sizeof(char) * len + 1);
		if(mem[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(mem[j]);
			}
			free(mem);
			return (NULL);
		}
		k = l;
		for (j = 0; j < len; j++)
		{
			mem[i][j] = str[k];
		}
		mem[i][j] = '\0';
	}
	mem[i] = NULL;
	return (mem);
}
