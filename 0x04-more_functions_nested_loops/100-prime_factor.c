#include <stdio.h>

/**
 * main-biggest prime number
 * Return:always 0
 */
int main(void)
{
	long long int number = 612852475143;
	int a, prime;

	for (a = 2;a <= number; a++)
	{
		while (number % a == 0)
		{
			prime = a;
			number = number / a;
		}
	}
	printf("%d", prime);
	return (0);
}
