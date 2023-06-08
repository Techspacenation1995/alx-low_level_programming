#include <unistd.h>


/**
 * _putchar - Print a character to stdio.
 * @c: Integer Character.
 *
 * Return: One character.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
