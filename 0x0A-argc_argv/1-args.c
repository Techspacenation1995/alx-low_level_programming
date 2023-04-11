#include <stdio.h>

/**
 * main -> a program that prints the number of arguments passed into it.
 * @argc: Argumenet counts.
 * @argv: Argument vector.
 * Return: 0 for succes.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
