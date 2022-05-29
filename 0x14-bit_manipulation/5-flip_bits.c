#include "main"

/**
 * flip_bits - find number of bits you would need to flip
 *  to get the 2nd number from the first number to another
 *
 * @n: 1st number
 * @m: 2nd number (destiny)
 *
 * Return: # of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
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
