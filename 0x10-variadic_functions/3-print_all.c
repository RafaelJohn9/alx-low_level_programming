#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all-prints any
 * @format:format
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list arg;
	
	va_start(arg, format);
	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(arg, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(arg, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", (float)va_arg(arg, double));
		}
		else if (format[i] == 's')
		{
			printf("%s", va_arg(arg, char *));
		}
		else
		{
			i++;
			continue;
		}
		if (format[i + 1])
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
