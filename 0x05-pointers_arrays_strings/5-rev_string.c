#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * rev_string-prints reverse
 * @s:value to be manipulated
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i = 0;
	char *string = malloc((len + 1) * sizeof(char));

	if (string == NULL)
	{
		return;
	}

	for (len = len - 1; len >= 0; len--)
	{
		string[i] = s[len];
		i++;
	}
	string[i] = '\0';
	strcpy(s, string);
	free(string);

}
