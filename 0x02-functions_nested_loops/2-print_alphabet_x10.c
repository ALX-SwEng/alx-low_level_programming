#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10 times
 *
 * Return: none.
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i;
	
	for (i = 1; i <= 10; ++i)
	{
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	}
}
