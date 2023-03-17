#include <stdio.h>

/**
 * main - this code print the alphabet in lower case
 * Author - Akinbami Taofeek Olamide
 * Date - 17th of March 2023.
 * Return: nothing is executed sucessfully
 */

int main(void)
{
	char alphabet; /* Variable declaration */

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
