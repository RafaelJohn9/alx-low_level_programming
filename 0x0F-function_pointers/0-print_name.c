#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name-prints out name
 * @name:vallue to be printed
 * @f:function ptr
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
	else
	{
		return;
	}
}
