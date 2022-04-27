#include "main.h"

/**
 * _print_rev_recursion - recursively prints a string in reverse.
 * @s: string pointer
 *
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion (s + 1);
		putchar (*s);
	}
	else	
		putchar('\n');
}
