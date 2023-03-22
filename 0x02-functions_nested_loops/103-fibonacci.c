#include <stdio.h>
/**
 * main-addition of even fibbonaci
 * Return:always 0
 */
int main(void)
{
	long int a = 1;
	long int b = 2;
	long int next = a + b;
	long int c;
	long int sum = b;

	while (next < 4000000)
	{
		c = next;
		next = c + b;
                b = c;
		if (next % 2 == 0)
		{
			sum = next + sum;
		}
	}
	printf("%ld\n",sum);
	return (0);
}

