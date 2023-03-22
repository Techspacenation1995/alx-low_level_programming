#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print all alphabet in lower case
 * Author - Akinbami Toafeek Olamide
 * Date - 22nd of March, 2023.
 *
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
