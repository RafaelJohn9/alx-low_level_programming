#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all-prints any
 * @separator:separator
 * @n:value
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	void *x;
	va_list arg;

	va_start(arg, format);
	while (i < 10)
	{
		x = va_arg(arg, void *);
		if (x == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", (char *)x);
		}
		i++;
	}
	va_end(arg);
	putchar('\n');
}
