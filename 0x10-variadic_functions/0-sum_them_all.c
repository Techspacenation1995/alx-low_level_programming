#include "variadic_functions.h"

/**
 * sum_them_all - A function that takes in variable
 * parameter and sums them all.
 * @n: Size of the integer.
 *
 * Return: An  integer result which is the sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list my_number;

	if (n == 0)
	{
		return (0);
	}

	va_start(my_number, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(my_number, int);

		sum += num;
	}
	va_end(my_number);

	return (sum);
}
