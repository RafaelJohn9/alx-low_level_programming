#include "main.h"
#include <unistd.h>
/**
 * _putchar-puts out char
 * @c:sharacter
 * Return:character
 */
int  _putchar(char c)
{
	return(write(1, &c, 1));
}
