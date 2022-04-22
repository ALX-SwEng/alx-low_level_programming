#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: number
 * Return: Always 0.
 */

void print_number(int n)
{
	int n1 = n;

	if (n < 0)
	{
		_putchar ('-');
		n = -n1;
	}
	
	if (n / 10 != 0)
		print_number (n % 10);

	putchar ('0' + n % 10);
}
