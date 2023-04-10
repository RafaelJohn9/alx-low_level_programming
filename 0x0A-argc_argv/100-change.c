#include <stdio.h>
#include <stdlib.h>

/**
 * main-prints the min num of coins to make change for an amt of money
 * @argc:num of arg
 * @argv:arg
 * Return:always 0
 */
int main(int argc, char **argv)
{
	int i = 1;
	int change = 0;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[i]);
	for (i = 1; num > 0; i++)
	{
		if (num >= 25)
		{
			change++;
			num = num - 25;
		}
		else if (num >= 10)
		{
			change++;
			num = num - 10;
		}
		else if (num >= 5)
		{
			change++;
			num = num - 5;
		}
		else if (num >= 2)
		{
			change++;
			num = num - 2;
		}
		else if (num >= 1)
		{
			change++;
			num = num - 1;
		}
	}
	printf("%d\n", change);
	return (0);
}
