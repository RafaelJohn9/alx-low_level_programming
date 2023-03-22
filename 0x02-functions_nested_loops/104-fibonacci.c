#include <stdio.h>
/**
 * main - generates the firdt 98 fibonacii sequence numbers
 * Return:always 0
 */
int main(void)
{
	unsigned long long limiter = 0;
	unsigned long long a = 1;
	unsigned long long b = 2;
	unsigned long long sum = a + b;
	unsigned long long c;

	printf("1, 2, %llu, ", sum);
	while (limiter < 98)
	{
		c = sum;
		sum = c + b;
		b = c;
		if (limiter < 97)
		{
			printf("%llu, ", sum);
		}
		else
		{
			printf("%llu", sum);
		}
		limiter++;
	}
	putchar('\n');
	return (0);
}
