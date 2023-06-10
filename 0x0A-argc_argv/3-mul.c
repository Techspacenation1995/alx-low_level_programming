#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - Starting point of our program.
 * @argc: Argument count
 * @argv: Argument Vector.
 * Return: Multiplacation of the command line 
 */

int main(int argc, char **argv)
{
	int num1, num2, result;
	if (argc != 3)
	{
		printf("Error\n");
		return 1;
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	
	printf("%d\n", result);
	
	return 0;
}
