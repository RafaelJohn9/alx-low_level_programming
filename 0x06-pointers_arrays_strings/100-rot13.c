#include "main.h"
/**
 * rot13-enciphering using an after 13th word
 * @str:value to be manipulated
 * Return:cipherd text
 */
char *rot13(char *str)
{
       	int i, j;
	char *result = str;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	return result;
}
