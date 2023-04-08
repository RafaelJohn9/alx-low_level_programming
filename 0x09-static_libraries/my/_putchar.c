#include "main.h"
#include <unistd.h>

/**
 * _putchar-gives one character output in the console
 * @c:the value(char)
 * Return:character
 */
char _putchar(char c)
{
	return(write(1, &c, 1));
}
