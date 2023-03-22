#include <stdio.h>
/**
 * main - generates the firdt 98 fibonacii sequence numbers
 * Return:always 0
 */
int main(void)
{
	long long unsigned int limiter = 0;
	long long unsigned int a = 1;
	long long unsigned int b = 2;
	long long unsigned int sum = a + b;
	long long unsigned int c;

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
