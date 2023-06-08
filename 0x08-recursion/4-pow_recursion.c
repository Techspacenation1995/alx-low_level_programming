#include "main.h"

/**
 * _pow_recursion - A recursive function that determines the
 * exponent of an integer.
 * @x: First integer parameter
 * @y: Secomd integer parameter
 *
 * Return: The calculation of exponent
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
