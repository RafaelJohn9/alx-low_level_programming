#include "main.h"
#include <stdlib.h>

/**
 * str_concat-concatenates two strings
 * @s1:string1
 * @s2:string2
 * Return:concatenated str
 */
char *str_concat(char *s1, char *s2)
{
	char *mem;
	int i;
	int len_1 = 0, len_2 = 0;
	int a;

	while (s1[len_1] != '\0')
	{
		len_1++;
	}
	while (s2[len_2] != '\0')
	{
		len_2++;
	} 
	mem = malloc((sizeof(char) * len_1) + (sizeof(char) * len_2) - 1);
	if (mem == NULL)
	{
		return(NULL);
	}
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_1; i++)
	{
		mem[i] = s1[i];
	}
	for (a = 0; a < len_2; a++)
	{
		mem[i] = s2[a];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
