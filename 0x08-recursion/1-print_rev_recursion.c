#include "main.h"

/**
 * _print_rev_recursion - recursively prints a string in reverse.
 * @s: string pointer
 *
 * Return: nothing.
 */

void void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(++s);
	}
	else
		_putchar('\n');
}
