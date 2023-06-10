#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Starting point of our program.
 * @argc: Argument count
 * @argv: Argument Vector.
 * Return: Argument count or vector to the command line.
 */

int main(int argc, char **argv)
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}	

	return (0);
}
