#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name-prints out name
 * @name:vallue to be printed
 * @f:function ptr
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0)
	{
		return;
	}
	f(name);
}
