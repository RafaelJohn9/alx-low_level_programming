#include <stdio.h>
/**
 * main-first 50 fibonnaci numbers
 * Return:always 0
 */
int main(void)
{
	long int limiter = 2;
	long int a = 1;
	long int b = 2;
	long int sum = a + b;
	long int c;

	printf("1, 2\n");
	printf("%ld, ", sum);
	while (limiter <= 50)
	{
		c = sum;
		sum = c + b;
		b = c;
		if (limiter < 50)
		{
			printf("%ld, ", sum);
		}
		else
		{
			printf("%ld", sum);
		}
		limiter++;
	}
	return (0);
}
