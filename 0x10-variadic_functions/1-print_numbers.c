#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers-a function that prints numbers, followed by a line
 * @separator:separator
 * @n:is the number of integer passed to the functions
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	int i, x;

	va_start(arg, n);
	for (i = 0; i < (int)n; i++)
	{
		x = va_arg(arg, int);
		printf("%d", x);
		if (i != (int)n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(arg);
}
