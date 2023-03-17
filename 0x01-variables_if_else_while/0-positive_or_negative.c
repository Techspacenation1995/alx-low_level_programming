#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - An if function to show if a number is positive or negative
 * Author - Akinbami Taofeek Olamide
 * Return: 0 if sucessfully executed
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
