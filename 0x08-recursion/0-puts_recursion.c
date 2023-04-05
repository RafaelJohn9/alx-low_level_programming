#include "main.h"

/**
 * _puts_recursion-fuction that prints a string followed by a new line
 * @s:value
 */
void _puts_recursion(char *s)
{
	_putchar(*s++);
	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	if ( *s == '\0')
	{
		_putchar('\n');
	}
}
