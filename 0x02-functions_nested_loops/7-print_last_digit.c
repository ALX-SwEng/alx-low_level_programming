#include "main.h"
#include <limits.h>
#include <stdlib.h>

/**
 * print_last_digit - extract the last digit of a number
 * @n: an integer number
 * Return: last digit of number.
 */
int print_last_digit(int n)
{
	if (n == INT_MIN)
		n = 8;
	if (n < 0)
		n = abs(n);

	_putchar (n % 10 + '0');

return (n);
}
