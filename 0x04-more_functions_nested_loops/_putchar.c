#include "main.h"
#include <unistd.h>

/**
 * _putchar-a simple _putchar output
 * @c:value
 * Return:output
 */
char _putchar(char c)
{
	return(write(1, &c,1));
}
