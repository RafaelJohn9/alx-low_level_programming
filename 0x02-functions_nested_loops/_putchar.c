#include <unistd.h>
#include "main.h"
/**
 *_putchar-writing a _putchar() function
 *@c:char printed out
 * Return:output to console
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
