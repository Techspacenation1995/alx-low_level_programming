#include <unistd.h>

/**
 *  _putchar - Prints a character to the standard output
 *  @c: character constant.
 *
 *  Return: A character to standard output
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
