#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int len = 0, i;

	while (*(str + len) != '\0')
	{
		++len;
	}

	i = len / 2;
	if (len % 2 == 1)
		i++;

	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
