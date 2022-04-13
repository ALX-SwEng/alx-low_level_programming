#include "stdio.h"

/**
 * _abs - compute the absolute value of integer
 * @n: an integer number
 * Return: absolute value.
 */
int _abs(int n)
{
if (n < 0)
return (-1 * n);
else
return (n);
}
