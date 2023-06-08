#include "main.h"

/**
 * factorial- A function that prints the factorial of an integer
 * using recursion.
 * @n: An integer parameter.
 *
 * Return: The final answer after recursion.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
