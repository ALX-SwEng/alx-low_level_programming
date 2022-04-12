#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0.
 *
 * Return: none.
 */
void times_table(void)
{
int i;

for (i = 1; i <= 10; ++i)
{
_putchar ('0');
if (i < 10)
{
_putchar (',');
_putchar (' ');
_putchar (' '); 
}
}
_putchar ('\n');

for (i = 1; i <= 9; ++i)
{
int j;

_putchar ('0');
_putchar (',');
_putchar (' ');
_putchar (' ');

for (j = 1; j <= 9; ++j)
{
int r, p = i * j;

if (p <= 9)
{
_putchar (p + '0');
_putchar (' ');
}
else
{
r = p % 10;
p = p / 10;
_putchar(p + '0');
_putchar(r + '0');
}

if (j < 9)
{
_putchar (',');
_putchar (' ');
}
}
_putchar ('\n');
}
}
