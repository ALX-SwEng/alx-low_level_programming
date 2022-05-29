#include "main.h"

/**
 * set_bit -  find the value of a bit at a given index.
 * @n: decimal number
 * @index: index starting from 0 of the bit you want to get
 *
 * Return: value of a bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32) /* because size of long int is 32 bits */
		return (-1);

	 /*
	 * First shift left 1 by index bits
	 * and then OR/Add it the given number
	 */

	*n = *n | (1 << index);

return (1);
}
