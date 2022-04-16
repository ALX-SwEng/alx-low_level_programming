#include "main.h"
#include <limits.h>
/**
 * print_number - a function that prints an integer.
 * @n: number
 * Return: Always 0.
 */
void print_number(int n)
{
	unsigned long int rev = 0;
	int temp, len = 0, sign = 0;

	if (n == 0)
		len = 1;

	else if (n == INT_MIN)
	{
		n = 2147483647;
		temp = 1;
		sign = 1;
	}
	else if (n < 0)
	{
		n = -1 * n;
		sign = 1;
	}

	while (n > 0)
	{
		int rem = n % 10;
		if (temp == 1)
		{
			rem += 1;
			temp = 0;
		}
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
