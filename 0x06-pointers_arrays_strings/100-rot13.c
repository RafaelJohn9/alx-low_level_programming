#include "main.h"
/**
 * rot13-enciphering using an after 13th word
 * @str:value to be manipulated
 * Return:cipherd text
 */
char *rot13(char *str)
{
	char *result = str;
	int i;
	char is_upper;

	for (i = 0; str[i] != '\0'; i++)
	{
		is_upper = (str[i] >= 'A' && str[i] <= 'Z');
		if (is_upper)
		{
			str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
		}
	}
	return (result);
}
