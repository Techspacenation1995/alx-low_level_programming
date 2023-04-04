#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: the string parameter.
 * Return: return the lenght which is an integer type
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (s[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght)
}
