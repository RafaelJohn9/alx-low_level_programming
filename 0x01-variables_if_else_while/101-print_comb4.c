#include <stdio.h>
/**
 * main-The success combination in business is : Do what you do better ... and :do more of what you do
 * Return:always 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1 ; b <= 9; b++)
		{
			for (c = b + 1; c <= 9; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');
				if (a < 7 || b < 8 || c < 9)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					continue;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
