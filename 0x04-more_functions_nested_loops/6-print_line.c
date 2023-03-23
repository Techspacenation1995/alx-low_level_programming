#include "main.h"

/**
 * print_line - function that draw a straight line in the terminal
 * @n: is the integer for the paramaters of my function
 * Return: 0
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
