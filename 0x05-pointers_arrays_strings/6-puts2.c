#include "main.h"
/**
 * puts2 -   prints every other character of a string,
 * starting with the first character, followed by a new line..
 * @str: string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int len = 0, i = 0;

	while (*(str + len) != '\0')
	{
		++len;
	}

	while (i < len)
	{
		_putchar(*(str + i));
		i += 2;
	}
	_putchar('\n');
}
