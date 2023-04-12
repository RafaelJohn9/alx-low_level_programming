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
		j = 0;
		if (str[l] != ' ')
		{
			k = l;
			while (str[k] != ' ')
			{
				len++;
				k++;
			}
			mem[i] = malloc(sizeof(char) * len);
			while (str[l] != ' ')
			{
				mem[i][j] = str[l];
				l++;
				j++;
			}
		}
		else
		{
			l++;
			i -= i;
		}
	}
	mem[i] = NULL;
	return (mem);
}
