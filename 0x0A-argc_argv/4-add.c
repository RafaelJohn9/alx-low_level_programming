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
	int i;
	int sum = 0;
	int num;

	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] < '0' || argv[i][0] > '9')
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		sum = sum + num;
	}
	printf("%d\n", sum);
	return (1);
}
