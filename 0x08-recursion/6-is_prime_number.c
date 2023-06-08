#include "main.h"

/**
 * is_prime_number - A recursive number that prints prime numbers.
 * @n: Positive integer
 *
 * Return: The result of the prime numbers.
 */

int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}

/**
 * is_prime_recursive - My actual recursive function.
 * @n: Positive interger.
 * @divisor: Another positive integer.
 *
 * Return: 1 if prime or  otherwise.
 */

int is_prime_recursive(int n, int divisor)
{
	if (n <= 1) /* Number less than or equal to 1 are not prime */
	{
		return (0);
	}
	if ((n % divisor) == 0) /* if number is divisible by divisor, not prime */
	{
		return (0);
	}
	if ((divisor * divisor) > n) /* It is prime */
	{
		return (1);
	}
	else
	{
		return (is_prime_recursive(n, divisor + 1));
	}
}
