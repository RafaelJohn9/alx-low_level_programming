#include <stdarg.h>

/**
 * sum_them_all-returns the sum of all its parameter
 * @n:constant count
 * Return:always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list arg;
	int i, x;

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	for (i = 0; i < (int)n; i++)
	{
		x = va_arg(arg, int);
		sum += x;
	}
	va_end(arg);
	return (sum);
}
