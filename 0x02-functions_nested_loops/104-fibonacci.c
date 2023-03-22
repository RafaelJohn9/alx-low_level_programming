#include <stdio.h>
/**
 * main - generates the firdt 98 fibonacii sequence numbers
 * Return:always 0
 */
int main(void)
{
	unsigned long int limiter = 0;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int sum = a + b;
	unsigned long int c;

	printf("1, 2, %lu, ", sum);
	while (limiter < 98)
	{
		c = sum;
		sum = c + b;
		b = c;
		if (limiter < 97)
		{
			printf("%lu, ", sum);
		}
		else
		{
			printf("%lu", sum);
		}
		limiter++;
	}
	putchar('\n');
	return (0);
}	
