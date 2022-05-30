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
	FILE *fp;  /* File pointer */

	fp = fopen (*filename, O_RDONLY);
	if (filename == NULL || fp < 0)
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
	free(buffer);

	if (wc < 0)	
		return (0);

return (write_c);
}
