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
  int read_c, write_c;
  FILE *fp;
 
  fp = fopen (*filename, O_RDONLY);
  
  if (filename == NULL || fp < 0)
    return (0);
  
  buffer = malloc(letters * sizeof(char));
  if (buffer == NULL)
    return (0);
  
  read_c = read(fp, buffer, letters);
  if (read_c < 0)
  {
    free(buffer);
    return (0);
  }
  buffer[read_c] = '\0';
  
   write_c = write(STDOUT_FILENO, buffer, read_c);
  if (write_c < 0)
  {
    free(buffer);
    return (0);
  }
 free(buffer);
  return (write_c);
}
