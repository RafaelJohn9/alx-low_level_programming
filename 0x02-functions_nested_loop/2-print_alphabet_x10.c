#include "main.h"
/**
 *print_alphabet_x10-print lowercase letters ten times
 */
void print_alphabet_x10(void)
{
	 char c;
	int num;

	for (num = 1; num < 11; num++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
