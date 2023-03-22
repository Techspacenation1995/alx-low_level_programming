#include <stdio.h>
#include "main.h"

/**
 * main - Function Prototype
 * Author - Akinbami Toafeek Olamide
 * Date - 22nd of March, 2023.
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
