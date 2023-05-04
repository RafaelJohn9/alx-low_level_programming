#include <unistd.h>
#include "main.h"

/**
 * _putchar-a function that prints the binary rep of a number
 * @c:char c
 * Return:char
 */
char _putchar(char *c)
{
	return(write(1, &c, 1));
}
