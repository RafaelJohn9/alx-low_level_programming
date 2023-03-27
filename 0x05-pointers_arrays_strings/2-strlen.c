#include "main.h"
#include <stdio.h>
/**
 * _strlen
 * @s:string to be counted
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
