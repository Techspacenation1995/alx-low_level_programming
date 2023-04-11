#include <stdio.h>
#include <stdlib.h>

/**
 * main -> A program that multiply two numbers by taking arguments.
 * @argc: Argument counts
 * @argv: Argument Vector.
 * Return: 0 for success.
 */

int main(int argc, char *argv[])
{
	int result = 0, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]); /* Conversion of string to Integer */
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
