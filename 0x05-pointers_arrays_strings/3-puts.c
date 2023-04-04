#include "main.h"

/**
 * _puts - for printing string to standard output followed by a new line
 * @str: Striing variable
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar("\n");
}
