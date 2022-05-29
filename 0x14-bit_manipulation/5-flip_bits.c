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
	int count = 0, num_flips = 0;
	unsigned long int current = n;

	while (current)
	{
		current = current >> 1;
		count++;
	}

	while (count)
	{
		if ((n & 1) != (m & 1)) /* check if corresponding bits are not the same */
			num_flips++;
		n = n >> 1;
		m = m >> 1;
	}
return (num_flips);
}
