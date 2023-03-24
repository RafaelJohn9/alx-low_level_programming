#include <stdio.h>

/**
 * main - fizzbuzz code
 * Return:always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz");
			putchar(' ');
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
			if (num == 100)
			{
				putchar('\n');
			}
			else
			{
				putchar(' ');
			}
		}
		else
		{
			printf("%d", num);
			putchar(' ');
		}
	}
}
