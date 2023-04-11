#include "main.h"
#include <unistd.h>

/**
 * _putchar-prints out char
 * @c:char
 * Return:char
 */
char _putchar(char c)
{
	return(write(1, &c, 1));
}
