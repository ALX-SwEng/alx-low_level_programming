#include "main.h"

/**
 * append_text_to_file - append new text at the end of a file
 *
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int wc1 = 0, wc2, fp;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[wc1])
			wc1++;

		wc2 = write(fp, text_content, wc1);
		if (wc2 != wc1)
			return (-1);
	}

close(fp);
return (1);
}
