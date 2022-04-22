#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: number
 * Return: Always 0.
 */
void print_number(int n)
{
	int rev = 0, len = 0, sign = 0, rem;

	if (n == 0)
		++len;
	
	else if (n < 0)
	{
		sign = 1;
	}
	
	while (n != 0)
	{
		rem = n % 10;
		if (sign)
			rem *= -1;

		rev = (rev * 10) + rem;
		n = n / 10;
		++len;
	}
	if (sign == 1)
		putchar ('-');

	while (len > 0)
	{
		putchar ('0' + rev % 10);
		rev = rev / 10;
		--len;
	}
}
