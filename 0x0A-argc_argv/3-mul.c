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
	int num_1 = atoi(argv[1]);
	int num_2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", num_1 * num_2);
	return (0);
}
