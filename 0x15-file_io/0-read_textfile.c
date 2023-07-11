#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads a textfile and print it to the POSIX
 * standard output
 * @filename - A pointer that points to the file name.
 * @letters - The number of characters that should be read
 *
 * Return: The number of character to the standard output.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead, bytesWritten;
	char *buf;

	/* if filename is NULL */
	if (!filename)
		return (0);

	/* opening the file */
	fd = open(filename, O_RDONLY);

	/* If opening fails */
	if (fd == -1)
		return (0);

	/* create a buffer to read the file contenet into */
	buf = malloc(sizeof(char) * (letters));

	/* if no buffer */
	if (!buf)
		return (0);

	/* Read 'letters' number of char from the file into the buffer */
	bytesRead = read(fd, buf, letters);

	/* Write the contenet of buffer to the standard output */
	bytesWritten = write(STDOUT_FILENO, buf, bytesRead);

	/* close file dsecriptor */
	close(fd);

	/* Free buffer */
	free(buf);

	return (bytesWritten);
}
