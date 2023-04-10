#include <stdio.h>
#include <stdlib.h>
/**
 * main-multiplies two numbers
 * @argc:number of arguments
 * @argv:arguments
 * Return:always 0
 */
int main(int argc, char **argv)
{
	int i, j;
	int sum = 0;
	int num;

	if (argc < 2)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (0);
}
