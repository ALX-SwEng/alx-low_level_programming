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
		}}
	_putchar ('\n');
	for (i = 1; i <= 9; ++i)
	{
		int j, r1, r2, p = 0;

		for (j = 0; j <= 9; ++j)
		{
			if (j == 0)
				_putchar ('0');
			else
			{
				p = i * j;
				_putchar (',');
				_putchar (' ');
				if (p <= 9)
				{
					_putchar (' ');
					_putchar (p + '0');
				}
				else
				{
					r1 = p % 10;
					r2 = p / 10;
					_putchar(r2 + '0');
					_putchar(r1 + '0');
				}}
		}
		_putchar ('\n');
	}}
