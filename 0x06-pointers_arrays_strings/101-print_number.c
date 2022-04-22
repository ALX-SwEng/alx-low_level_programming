#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: number
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned int rev = 0, len = 0;

	if (n == 0)
		_putchar ('0');

	else if (n < 0)
	{
		_putchar ('-');
		n = -n;
	}

	while (n > 0)
	{
		rev = (rev * 10) + n % 10;
		n = n / 10;
		++len;
	}

	while (len > 0)
	{
		_putchar ('0' + rev % 10);
		rev = rev / 10;
		--len;
	}
}
