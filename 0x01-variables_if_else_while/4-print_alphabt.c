#include <stdio.h>
/**
 * main-alphabet except q and e
 * Return: always 0
 */
int main(void)
{
	int letter = 97;

	while (letter <= 122)
	{
		if (letter == 101 || letter == 113)
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
