#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: number
 * Return: Always 0.
 */

void print_number(int n)
{
	int rev = 0, len = 0, sign = 0;
	if (n == 0)
		len = 1;
	else if (n < 0)
	{
		n = -1 * n;
		sign = 1;
	}

	while (n > 0)
	{
		rev = (rev * 10) + (n % 10);
		n = n / 10;
		++len;
	}

	if (sign == 1)
		_putchar ('-');

	while (len > 0)
	{
		_putchar ('0' + rev % 10);
		rev = rev / 10;
		--len;
    }
}
