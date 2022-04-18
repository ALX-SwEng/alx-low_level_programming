#include "main.h"

/**
 * rev_string -   prints a string in reverse, followed by a new line, to stdout.
 * @s: string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int len = 0, i = 0;
	char *str;

	while (*(s + len) != '\0')
	{
		*(str + len) = *(s + len);
		++len;
	}

	--len;
	while (len >= 0)
	{
		*(s + i) = *(str + len);
		--len;
		++i;
	}
}
