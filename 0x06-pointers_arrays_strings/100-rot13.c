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
	char is_upper;

	for (i = 0; str[i] != '\0'; i++)
	{
		is_upper = (str[i] >= 'A' && str[i] <= 'Z');
		if (is_upper)
		{
			str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
		}
		else
		{
			str[i] = ((str[i] - 'A' + 13) % 26) + 'a';
		}
	}
	return (result);
}
