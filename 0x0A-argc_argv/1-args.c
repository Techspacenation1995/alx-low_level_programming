#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Starting point of our program.
 * @argc: Argument count
 * @argv: Argument Vector.
 * Return: Argument count or vector to the command line.
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
