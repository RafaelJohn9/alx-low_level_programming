#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings:prints str
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
			printf("nil");
		}
		if (separator == NULL)
		{
			printf("%s", x);
		}
		if (i == (int)n - 1)
		{
			printf("%s", x);
		}
		else
		{
			printf("%s%s", x, separator);
		}
	}
	va_end(arg);
	putchar('\n');
}
