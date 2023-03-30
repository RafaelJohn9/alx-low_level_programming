#include "main.h"

/**
 * string_toupper-turns all lowercase to upper case
 * @str:str to be checked
 * Return:uppercased lowercase
 */

char *string_toupper(char *str)
{
	int len = 0;
	int alpha;

	while (str[len] != '\0')
	{
		len++;
	}
	for (alpha = 0; alpha < len; alpha++)
	{
		if (str[alpha] >= 97 && str[alpha] <= 122)
		{
			str[alpha] = str[alpha] - 32;
		}
		else
		{
			continue;
		}
	}
	return (str);
}
