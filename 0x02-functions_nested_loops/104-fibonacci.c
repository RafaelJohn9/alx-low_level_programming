#include <stdio.h>
/**
 * main - generates the firdt 98 fibonacii sequence numbers
 * Return:always 0
 */
int main(void)
{
	long int limiter = 0;
	long int a = 1;
	long int b = 2;
	long int sum = a + b;
	long int c;

	printf("1, 2, %ld, ", sum);
	while (limiter < 98)
	{
		c = sum;
		sum = c + b;
		b = c;
		if (limiter < 97)
		{
			printf("%ld, ", sum);
		}
		else
		{
			printf("%ld", sum);
		}
		limiter++;
	}
	putchar('\n');
	return (0);
}	
