#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Starting point of our program.
 * @argc: Argument count
 * @argv: Argument Vector.
 * Return: Argument count or vector to the command line.
 */

int main(__attribute__((unused))int argc,  char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
