#include <stdio.h>
/**
 * main - generates the firdt 98 fibonacii sequence numbers
 * Return:always 0
 */
int main(void)
{
	double limiter = 0;
	double a = 1;
	double b = 2;
	double sum = a + b;
	double c;

	printf("1, 2, %.0f, ", sum);
	while (limiter < 97)
	{
		c = sum;
		sum = c + b;
		b = c;
		if (limiter < 96)
		{
			printf("%.0f, ", sum);
		}
		else
		{
			printf("%.0f", sum);
		}
		limiter++;
	}
	putchar('\n');
	return (0);
}
