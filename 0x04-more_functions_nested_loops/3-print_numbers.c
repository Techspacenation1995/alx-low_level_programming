#include "main.h"

/**
 * print_numbers - This function print numbers from 0 to 9 folled by a new line
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
