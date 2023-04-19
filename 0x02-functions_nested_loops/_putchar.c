#include <unistd.h>

/**
 * _putchar - a function that prints a character to
 * standard output
 * Return: 0 if successfully executed
 * @c: Argument passed
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
