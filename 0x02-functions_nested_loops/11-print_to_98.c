#include <stdio.h>
/**
 * print_to_98-prints to 98
 * @num:input to start at
 */
void print_to_98(int num)
{
	int a;

	for (a = num; num <= 98; a++)
	{
		printf("%d", a);
		if (a < 98)
		{
			putchar(',');
			putchar(' ');
	}
}