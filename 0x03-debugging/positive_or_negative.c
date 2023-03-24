#include "main.h"

/**
 * positive_or_negative - tests function that prints
 * if integer is positive or negative
 * @i: parameter for the function
 * Return:0 if sucessfully checked.
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is positive\n", i);
	else
		printf("%d is negative\n", i);
}
