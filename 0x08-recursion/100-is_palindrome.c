#include "main.h"

/**
 * is_palindrome- checks palindrome
 * @s:checks for str
 * Return:0 or 1
 */
int is_palindrome(char *s)
{
	int len = 1 + is_palindrome(s + 1);
	int i = 0;

	if (s[i++] == (len / 2) - 1)
	{
		return (1);
	}
	else if (s[i++] == s[len--])
	{
		return (is_palindrome(--s));
	}
	else
	{
		return (0);
	}
}
