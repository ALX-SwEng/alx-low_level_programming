#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int rc, wc; /* read & write character counter */
	int fp;  /* File pointer */

	fp = open(filename, O_RDONLY);
	if (!filename || fp < 0)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	rc = read(fp, buffer, letters);
	if (rc < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[rc] = '\0';

	wc = write(STDOUT_FILENO, buffer, rc);

	if (wc < 0)
	{
		free(buffer);
		return (0);
	}

free(buffer);
return (wc);
}
