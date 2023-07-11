#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to the null terminated string to write to file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int wwrite;

	/* checks if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* if text_content is NULL create an empty file */
	if (text_content == NULL)
		text_content = "";

	/* Open the file in write mode only, and truncate if exist */
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/* If opening fails */
	if (file_descriptor == -1)
		return (-1);

	/* write into file */
	wwrite = write(file_descriptor, text_content, _strlen(text_content));

	/* if write fails */
	if (wwrite == -1)
		return (-1);

	/* close file */
	close(file_descriptor);

	return (1);
}

/**
 * _strlen - Function that returns the length of string.
 * @s: pointer to the null-terminated byte string to be examined.
 *
 * Return: The length of the null-terminated byte string s.
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
