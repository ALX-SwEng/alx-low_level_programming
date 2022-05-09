#include "main.h"

/**
 * swap_int -  swaps the values of two integers.
 * @a: 1st integer number
 * @b: 2nd integer number
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
