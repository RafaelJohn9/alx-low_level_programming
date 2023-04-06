#include "main.h"

/**
 * is_palindrome- checks palindrome
 * @s:checks for str
 * Return:0 or 1
 */
int is_palindrome(char *s)
{
	int len;
	int i = 0;
	int mid;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len = 1 + is_palindrome(s + 1);
	}
	mid = len / 2 - 1;
	if (s[i++] == s[mid])
	{
		return (1);
	}
	else if (s[i++] == s[len])
	{
		int result = is_palindrome(s + 1);

		return (result);
	}
	else
	{
		return (0);
	}
}
