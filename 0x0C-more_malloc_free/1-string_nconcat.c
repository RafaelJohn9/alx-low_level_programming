#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat-concatenates two str
 * @s1:string 1
 * @s2:string 2
 * @n:number of bytes of s2 to be concatenated in string 1
 * Return: concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int i = 0, j = 0, len_1 = 0, len_2 = 0, sum = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_1 = strlen(s1);
	len_2 = strlen(s2);
	if (n >= len_2)
	{
		n = len_2;
	}
	sum = len_1 + n;
	mem = malloc(sizeof(char) * sum + 1);
	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_1; i++)
	{
		mem[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		mem[i] = s2[j];
	}
	mem[i] = '\0';
	return (mem);
}
