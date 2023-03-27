#include "main.h"
#include <unistd.h>

/**
 * _putchar-prints char
 * @c:char to be printed
 */
char _putchar(char c)
{
	return(write(1, &c, 1));
}
