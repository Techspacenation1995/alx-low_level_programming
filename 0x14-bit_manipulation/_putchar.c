#include "main.h"

/**
 * _putchar - A function that print a character to the standard output
 * @c: A character constant
 *
 * Return: the character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
