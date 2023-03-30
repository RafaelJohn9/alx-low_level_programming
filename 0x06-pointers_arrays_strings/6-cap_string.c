#include "main.h"

/**
 * cap_string- capitalizes word of a sring
 * @str:value
 * Return:capitalized lower case
 */
char *cap_string(char *str)
{
	int len = 0;
	int a;
	int i = 1;

	while (str[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < len; a++)
	{
		if (str[a] == '\n' || str[a] == '!' ||
				str[a] == ' ' || str[a] == '.' || str[a] == '\t' || str[a] == ',')
		{
			if (str[a + i] >= 97 && str[a + i] <= 122)
			{
				str[a + i] = str[a + i] - 32;
			}
			else if (str[a + i] < 97 && str[a + i]  > 122 &&
					str[a + i + 1] >= 97 && str[a + i + 1] <= 122)
			{
				str[a + (i + 1)] = str[a + (i + 1)] - 32;
			}
			else
			{
				continue;
			}
		}
	}
	return (str);
}
