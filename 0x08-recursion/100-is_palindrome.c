#include "main.h"

/**
 * is_palindrome - Checks if it is a pallidrone
 * @s: A string pointer variable.
 *
 * Return: 1 if it is a pallidrone or otherwise return 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (is_palindrome_recursive(s, 0, _strlen_recursion(s)));
}


/**
 * _strlen_recursion - A recursive function that prints the
 * length of a string
 * @s: A pointer variable
 *
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return ((1) + _strlen_recursion(s + 1));
	}
}

/**
 * is_palindrome_recursive - checks the characters recursively for palindrome
 * @s: string to check
 * @start: Starting index
 * @end: length of the string which also denots end of string
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome_recursive(char *s, int start, int end)
{
	/* Base case: When start and end index cross or meet each other */
	if (start >= end)
	{
		return (1); /* All characters have been compared, is palindrome */
	}
	/* Recursive case: Compare characters at the start and end indices */
	if (*(s + start) != *(s + end - 1))
	{
		return (0); /* Charcters do not match and not a palindrome */
	}
	/* Recursive call: Move to the next pair of character */
	else
	{
		return (is_palindrome_recursive(s, start + 1, end - 1));
	}
}
