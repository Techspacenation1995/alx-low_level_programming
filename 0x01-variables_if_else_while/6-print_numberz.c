#include <stdio.h>
/**
 * main - Write a program that prints all single digit numbers of base 10.
 * Author - Akinbami Taofeek Olamide.
 * Return: 0 if successfully executed.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');

	return (0);
}
