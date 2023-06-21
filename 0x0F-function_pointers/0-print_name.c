#include "function_pointers.h"

/**
 * print_name -  function that prints a name that has function pointer
 * as one of its arguments.
 * @name: A pointer to a string
 * @f: A function pointer pointing to the address of a function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
