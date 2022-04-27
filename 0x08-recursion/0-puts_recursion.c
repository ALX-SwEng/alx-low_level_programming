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
		putchar(*s);
		_puts_recursion(++s);
	}
	else
		putchar('\n');
}
