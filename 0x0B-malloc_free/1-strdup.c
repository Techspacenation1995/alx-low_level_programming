#include "main.h"

/**
 * _strdup - A function that allocates memory to a string.
 * @str: A pointer to a string.
 *
 * Return: A pointer.
 */

char *_strdup(char *str)
{
	int i = 0;
	unsigned int length = 0;
	char *copiedstr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	copiedstr = malloc((length + 1) * sizeof(char));

	if (copiedstr == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		copiedstr[i] = str[i];
		i++;
	}

	return (copiedstr);

	free(copiedstr);
}
