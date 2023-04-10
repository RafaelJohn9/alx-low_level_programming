#include <stdio.h>

/**
 * main-prints no of arg psssed into it
 * @argc:int typr number of arg
 * @argv:argument
 * Return:always 0
 */
int main(int argc, char **argv)
{
	int i = 0;

	if (argv[i] == 0)
	{
		return (0);
	}
	printf("%d\n", argc - 1);
	return (0);
}
