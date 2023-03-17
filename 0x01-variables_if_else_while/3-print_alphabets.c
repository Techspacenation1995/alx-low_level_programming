#include <stdio.h>

/**
 * main - A code that print the lowercase and uppercase
 * Author - Akinbami Taofeek.
 * Date - 17th of march, 2023.
 * Return: 0 if sucessfully executed.
 */

int main(void)
{
	char a;

	for (a = 97; a <= 122; a++)
		putchar(a);
	for (a = 65; a <= 90; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
