#include "main.h"

/**
 * _pow_recursion - compute the value of x raised to the power of y.
 * @x: base number
 * @y: exponent number
 *
 * Return:  returns the value of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}


/**
* binary_to_uint - converts a binary number to unsigned int
*
* @b: string containing the binary number
*
* Return: the decimal number
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; ++i)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	while (--i >= 0)
		decimal += ((b[i] - '0') * pow(2, i));

	return (decimal);
}