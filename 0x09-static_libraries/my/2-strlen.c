#include "main.h"
#include <stdio.h>
/**
 * _strlen-prints str length
 * @s:string to be counted
 * Return:strlength
 */
int _strlen(char *s)
{
	int limiter = 0;

	while (s[limiter] != '\0')
	{
		limiter++;
	}
	return (limiter);
}
