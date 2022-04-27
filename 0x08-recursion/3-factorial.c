#include "main.h"

/**
 * factorial - compute factorial.
 * @s: integer number
 *
 * Return: factorial of a number.
 */

{
	int fact;

	if (n > 0)
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
	
	else if (n == 0)
		return (1);

	else
		return (-1);
}
