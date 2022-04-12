#include "main.h"

/**
 * print_sign - check if a number is +ve, -ve or zero
 * @n: number inputed by user
 * Return: 1 if n is +ve, -1 if n is -ve othrwise 0.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
