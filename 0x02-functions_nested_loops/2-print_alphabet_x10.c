#include "main.h"

/**
 * main - invoke print_alphabet() function
 *
 * Return: Always 0.
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
		print_alphabet();

return (0);
}

/**
 * print_alphabet - print lowercase alphabet
 *
 * Return: none.
 */
void  print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
