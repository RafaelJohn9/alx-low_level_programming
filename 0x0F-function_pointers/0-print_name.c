#include "function_pointers.h"

/**
 * print_name-prints out name
 * @name:value to be printed
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
