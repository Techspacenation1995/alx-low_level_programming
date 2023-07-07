#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - A function that converts binary to integer.
 * @b: A pointer to string.
 *
 * Return: Converted string
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result = result << 1; /* Left shift the result by 1 position */
		}
		else if (b[i] == '1')
		/* Left shift the result by 1 position and set the rightmost bit to 1 */
		{
			result = (result << 1) | 1;
		}

		else
			return (0);
	}
	return (result);
}
