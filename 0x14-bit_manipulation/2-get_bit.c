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
	if (index > 32)
		return (-1);

	return ((n >> index) & 1);

/*
*	alternative solution
*
*	unsigned int count = 0;
*	unsigned long int current = n;
*
*
*	while (current)
*	{
*		current = current >> 1;
*		count++;
*	}
*
*	while (count)
*	{
*		current = n >> --count;
*		if (current & 1 && index == count)
*			return (1);
*		else if (index == count)
*			return (0);
*	}
*	return (0);
*/
}

