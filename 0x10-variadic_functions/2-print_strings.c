#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings-prints str
 * @separator:separator
 * @n:value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *x;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < (int)n; i++)
	{
		x = va_arg(arg, char *);
		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
		}
		if (separator != NULL && i < (int)n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(arg);
}
