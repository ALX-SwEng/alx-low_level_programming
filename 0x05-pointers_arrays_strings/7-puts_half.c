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
	
	while (*(s + len) != '\0')
	{
		++len;
	}

	i = len / 2;
	while (i < len/2)
	{
		_putchar(*(str + i));
		len++;
	}
	_putchar('\n');
}
