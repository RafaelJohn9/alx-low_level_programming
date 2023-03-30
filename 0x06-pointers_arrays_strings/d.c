#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main-check the code
 *
 * Return:always 0
 */
int main(void)
{
	char str[] = "zaa";
	char *p;

	p = rot13(str);
	printf("%s", p);
	printf("%s", str);
	return (0);

}

