#include "main.h"

/**
 * print_last_digit - extract the last digit of a number
 * @n: an integer number
 * Return: last digit of number.
 */
int print_last_digit(int n)
{
unsigned int c = n % 10;
  
_putchar (c + '0');
return (c);
}
