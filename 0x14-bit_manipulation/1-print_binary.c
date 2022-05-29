#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int current = n;

	while (current)
	{
		current = current >> 1;
		count++;
	}

	if (!count)
		putchar('0');

	while (count)
	{
		current = n >> --count;
		if (current & 1)
			putchar('1');
		else
			putchar('0');
	}
}
