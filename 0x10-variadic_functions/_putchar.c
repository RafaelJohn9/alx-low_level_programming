#include <unistd.h>

/**
 * _putchar:character return
 * @c:parameter
 * Return:int
 */
int _putchar(int c)
{
	return(write(1, &c, 1));
}
