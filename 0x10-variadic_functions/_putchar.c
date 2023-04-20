#include <unistd.h>

/**
 * _putchar:character return
 * @c:parameter
 * Return:int
 */
char  _putchar(char *c)
{
	return(write(1, &c, 1));
}
