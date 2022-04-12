#include "main.h"

/**
 * print_last_digit - extract the last digit of a number
 * @n: an integer number
 * Return: last digit of number.
 */
int print_last_digit(int n)
{
_putchar (n % 10 + '0');
return (n % 10);
}
