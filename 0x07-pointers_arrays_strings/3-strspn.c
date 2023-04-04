#include "main.h"

/**
 * _strspn-length of a prefix of a substring
 * @s:value 1
 * @accept:value 2
 * Return:number of times
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	unsigned int num = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == ' ' || s[a] == ',' || s[a] == '.')
			{
				break;
			}
			else if (s[a] == accept[b])
			{
				num++;
			}
			else
			{
				continue;
			}
		}
	}
	return (num);
}
