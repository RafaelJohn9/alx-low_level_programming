#include <stdio.h>
/**
 * main-first 50 fibonnaci numbers
 * Return:always 0
 */
int main(void)
{
	int limiter = 2;
	int a = 1;
	int b = 2;
	long int sum = a + b;
	int c;

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
