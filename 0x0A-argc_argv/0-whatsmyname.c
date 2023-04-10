#include <stdio.h>

/**
 * main -> This is a fuction that prints out its name when run as an exe file
 * @argc: Argument count parameter
 * @argv: Argumrnt vector parameter
 * Return: 0 for success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
