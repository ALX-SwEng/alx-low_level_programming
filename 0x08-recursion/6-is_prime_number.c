#include "main.h"

/**
 * is_prime - check if the number is prime
 *
 * @n: integer number
 * @i: integer, iterate until it is <n/2
 *
 * Return: 1 if number is prime, otherwise 0
 */

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i <= n / 2)
	{
		if (n % i == 0)
			return (0);

		return (is_prime(n, ++i));
	}

	return (1);
}


/**
 * is_prime_number - check if the number is prime
 *
 * @n: integer number
 *
 * Return: 1 if number is prime, otherwise 0
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
