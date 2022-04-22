#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: number
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int n1 = n, rev = 0, len = 0;

	if (n == 0)
		_putchar('0');

	else if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	while (n1 != 0)
	{
		rev = (rev * 10) + (n1 % 10);
		n1 = n1 / 10;
		++len;
	}

	while (len--)
	{
		_putchar((rev % 10) + '0');
		rev = rev / 10;
	}
}
