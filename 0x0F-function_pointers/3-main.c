#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main- test case
 * @argc: no of ar
 * @argv:arg
 * Return:always 0
 */
int main(int argc, char **argv)
{
	int num_2;
	int num_1;
	int ans = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' &&
				argv[2][0] != '*' && argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	num_1 = atoi(argv[1]);
	num_2 = atoi(argv[3]);
	ans = get_op_func(argv[2])(num_1, num_2);
	printf("%d\n", ans);
	return (0);
}
