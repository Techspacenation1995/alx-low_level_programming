#include <stdio.h>

/**
 * main - Omitting letters of the alphabet usng the if statement
 * Author - Akinbami Taofeek Olamide
 * Return: The code returns an integer  value if sucessfully executed
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if ((alpha != 'q') && (alpha != 'e'))
			putchar(alpha);
	}
	putchar('\n');

	return (0);
}
