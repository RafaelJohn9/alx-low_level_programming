#include <stdio.h>
/**
 * main-sums all multiples of 3 and 5 followed by a new line
 * Return:always 0
 */
int main(void)
{
	int num;
	int sum = 0;

	for (num = 1; num < 1024; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			sum = sum + num;
		}
		else
		{
			continue;
		}
	}
	printf("%d\n", sum);
	return (0);
}
