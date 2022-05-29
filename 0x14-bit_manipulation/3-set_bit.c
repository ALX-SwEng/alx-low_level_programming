#include "main.h"

/**
 * get_bit -  find the value of a bit at a given index.
 * @n: decimal number
 * @index: index starting from 0 of the bit you want to get
 *
 * Return: value of a bit
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

  *n = *n | (1 << index); /* shift left 1 by index bits */
	return (1);
}
