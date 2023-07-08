#include "main.h"
#include <unistd.h>

/**
 * _putchar - A function that prints one chaacter to the standard output
 * @c - Chracter argument passed.
 *
 * Return: Chracter.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
