#include "main.h"
/**
 * rot13-enciphering using an after 13th word
 * @str:value to be manipulated
 * Return:cipherd text
 */
char *rot13(char *str)
{
	char *result = str;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((str[i] >= 'a' && str[i] < 'n') || str[i] >= 'A' && str[i] < 'N')
			{
				result[i]++;
			}
			else if ((str[i] >= 'n' && str[i] <= 'z') ||
					(str[i] >= 'N' && str[i] <= 'Z'))
			{
				result[i]--;
			}
		}
	}
	return (result);
}
