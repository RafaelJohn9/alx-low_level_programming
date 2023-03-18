#include  <stdio.h>
/**
 * main-all possibe combinations of two numbers
 * Return:always 0
 */
int main(void)
{
	int i;
	int d;

	for (i = 0; i < 9; i++)
	{
		for (d = 1; d < 10; d++)
		{
			if (i == d)
			{
				continue;
			}
			else if (d < i)
			{
				continue;
			}
			else
			{
				putchar(i + '0');
				putchar(d + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
