#include "main.h"

/**
 * _puts_recursion - recursively prints a string, followed by a new line.
 * @s: string pointer
 *
 * Return: nothing.
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
		_putchar('\n');
}
