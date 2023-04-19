#include  "function_pointers.h"
#include <unistd.h>

/**
 * _putchar-only one char 
 * @c:value
 * Return:chat
 */
char _putchar(char c)
{
	return (write(1, &c, 1));
