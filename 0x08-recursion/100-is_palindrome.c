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
		return (1 + _strlen_recursion(s + 1));
		len = is_palindrome(s + 1);
	}
	mid = len / 2 - 1;
	if (s[i++] == mid)
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
