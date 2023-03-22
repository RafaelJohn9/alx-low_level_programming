#include <stdio.h>
/**
 * main - generates the firdt 98 fibonacii sequence numbers
 * Return:always 0
 */
int main(void)
{
	long long unsigned limiter = 0;
	long long unsigned a = 1;
	long long unsigned b = 2;
	long long unsigned sum = a + b;
	long long unsigned c;

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
