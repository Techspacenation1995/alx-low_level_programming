#include <stdio.h>

/**
 * main -  program that prints the lowercase alphabet in reverse
 * Author - Akinbami Taofeek Olamide
 * Date - 17th march 2023.
 * Return: 0 if successfully executed.
 */

int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');

	return (0);
}
