#include "main.h"

/**
 * str_concat - A dynamically allocated function that concatenate two strings
 * @s1: String literals 1
 * @s2: String literals 2
 *
 * Return: The concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat_String;

	if (s1 == NULL) /* Condition when null is passed */
		return ("");
	if (S2 == NULL)
		return ("");

	/* Calculate the length of string 1 and string 2 */

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concatenated string */

	concat_String = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat_String == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++) /* Copy s1 to concatenated string */
		concat_String[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat_String[i + j] = s2[j];

	return (concat_String);
}

