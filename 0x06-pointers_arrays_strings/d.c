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
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world \thello world\n";
	char *p;

	p = rot13(str);
	printf("%s", p);
	printf("%s", str);
	return (0);

}

