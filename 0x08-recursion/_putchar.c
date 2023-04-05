#include "main.h"
#include <unistd.h>

/**
 * _putchar-prints out a char
 * @c:value to be manipulated
 * Return:char
 */
char _putchar(char c)
{
	return(write(1, &c, 1));
}
