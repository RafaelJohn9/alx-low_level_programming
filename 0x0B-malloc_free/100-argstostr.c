#include "main.h"
#include <stdlib.h>

/**
 * argstostr-fuction that concatenates all the arguments of your program
 * @ac:nu,ber of argguments
 * @av:arguments itself
 * Return:concatenated str
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int k = 0;
	char *mem;
	int len = 0;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	mem = malloc(sizeof(char) * len + 1);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			mem[k] =  av[i][j];
			k++;
		}
		mem[k] = '\n';
		k++;
	}
	return (mem);
}
