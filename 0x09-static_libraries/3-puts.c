#include "main.h"
#include <stdio.h>
/**
 * _puts - A function that prints a string to the standard output
 * @str: A pointer to a string variable
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
