#include <stdio.h>
/**
 * print_to_98-prints to 98
 * @n:input to start at
 */
void print_to_98(int n)
{
	int a = n;

	if (n < 98)
	{
		for (a = n; a <= 98 ; a++)
		{
			printf("%d", a);

			if (a < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	else if (n > 98)
	{
		for (a = n; a >= 98; a--)
		{
			printf("%d", a);

			if (a > 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else
	{
		printf("%d", a);
	}
	printf("\n");
}
