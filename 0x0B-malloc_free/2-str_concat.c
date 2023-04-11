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
	char *mem = malloc((sizeof(char) * sizeof(s1)) + (sizeof(char) * sizeof(s2)) + 1);
	int i;
	int a;

	if (mem = NULL)
	{
		return(NULL);
	}
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		mem[i] = s1[i];
	}
	for (a = 0; s2[a] != '\0'; a++)
	{
		mem[i] = s2[a];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
