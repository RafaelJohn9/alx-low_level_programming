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
	int mid = len / 2 - 1;

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
