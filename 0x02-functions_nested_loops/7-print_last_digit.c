#include "main.h"

/**
 * print_last_digit - extract the last digit of a number
 * @n: an integer number
 * Return: last digit of number.
 */
int print_last_digit(int n)
{
if (n < 0)
n = (n * -1) % 10;

_putchar (n % 10 + '0');
return (n % 10);
}
