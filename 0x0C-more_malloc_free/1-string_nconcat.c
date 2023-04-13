#include "main.h"
#include <stdlib.h>

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
	unsigned int len_1 = 0, len_2 = 0;
	unsigned int i, j;
	unsigned int sum = 0;

	while (s1[len_1] != '\0')
	{
		len_1++;
	}
	while (s2[len_2] != '\0')
	{
		len_2++;
	}
	if (n >= len_2)
	{
		n = len_2;
	}
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL) 
	{
		s2 = "";
	}
	if ((int)len_2 >  0)
	{
		sum = len_1 + len_2;
	}
	mem = malloc(sizeof(char) * sum);
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
