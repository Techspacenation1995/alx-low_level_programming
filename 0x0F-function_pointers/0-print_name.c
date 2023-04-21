#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 * @name: Name given
 * @f: Function of name.
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
