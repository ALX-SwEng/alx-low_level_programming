#include "main.h"

/**
 * _sqrt_recursion - square root finder
 *
 * @n: integer number
 *
 * Return: sqrt root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - natural square finder
 *
 * @n: integer number
 * @i: integer, iterate until it is <n
 *
 * Return: sqrt root
 */

int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);

	if ((i * i) > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, ++i));
}
