#include  <stdio.h>

/**
 * print_int-converts int to ascii code
 * @n: integer to be printed
 * Return:two numbers combined
 */
int print_int(int n)
{
	putchar(n + '0');
}







/**
 * main-all possibe combinations of two numbers
 * Return:always 0
 */
int main(void)
{
	int i;
	int d;

	for (i = 0; i < 10; i++)
	{
		for (d = 0; d < 10; d++)
		{
			print_int('%d', i);
			print_int('%d', d);
			print_int('\n')
		}
	}
	return (0);
}
