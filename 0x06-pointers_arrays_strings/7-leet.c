#include "main.h"
/**
 * leet-checks and replaces a,e,o,t,l
 * @str:value to be checked
 * Return:return value
 */
char *leet(char *str)
{
	char *result = str;
	char *letters = {"aAeEoOtTlL"};
	char *replacements = {"4433007711"};
	int i, j;

	for (i = 0; result[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replacements[j];
				break;
			}
		}
	}
	return (result);
}
