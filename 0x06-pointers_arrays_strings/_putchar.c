#include "main.h"
#include <unistd.h>

/**
 * _putchar-def putchar
 * @c:value
 * Return:one byte value
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
}
