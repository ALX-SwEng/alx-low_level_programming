#include "main.h"

/**
 * more_numbers - print digits 0 - 14 ten times
 *
 * Return: none.
 */
void more_numbers(void)
{
int n = 0, t, i;

for (i = 1; i <= 10; ++i)
{ 
while (n <= 14)
{
if (n >= 10)
{
t = n / 10;
_putchar ('0' + t);
}
_putchar ('0' + n % 10);
++n;
}
_putchar ('\n');
}
}
