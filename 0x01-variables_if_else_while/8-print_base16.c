#include <stdio.h>

/**
 * main - print a number in base 16 followed by a new line.
 * Author - Akinbami Taofeek Olamide
 * Date - 18th march 2023.
 * Return: 0 if successful.
 */

int main(void)
{
	int base_10;
	char base_16;

	for (base_10 = 0; base_10 < 10; base_10++)
		putchar((base_10 % 10) + '0');

	for (base_16 = 'a'; base_16 <= 'f'; base_16++)
		putchar(base_16);

	putchar('\n');

	return (0);
}
