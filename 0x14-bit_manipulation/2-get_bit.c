#include "main.h"

/**
 * get_bit -  find the value of a bit at a given index.
 * @n: decimal number
 * @index: index starting from 0 of the bit you want to get
 *
 * Return: value of a bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}

