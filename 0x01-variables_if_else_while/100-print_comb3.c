#include  <stdio.h>
/**
 * main-all possibe combinations of two numbers
 * Return:always 0
 */
int main(void)
{
	int i;
	int d;

	for (i = 0; i < 10; i++)
	{
		for (d = 0; d < 10; d++)
		{
			putchar(i + '0');
			putchar(d + '0');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
