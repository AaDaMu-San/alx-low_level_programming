#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name.
 * @name: input name.
 * @f: func ptr.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
