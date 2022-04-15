#include "main.h"

/**
 * print_most_numbers - print digits except 2 & 4
 *
 * Return: none.
 */
void print_most_numbers(void)
{
int n = 0;

while (n <= 9)
{
if (n != 2 && n != 4)
_putchar ('0' + n);
++n;
}
_putchar ('\n');
}
