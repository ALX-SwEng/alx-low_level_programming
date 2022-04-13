#include "main.h"

/**
 * print_times_table - print the N times table, starting with 0.
 * @n: time table size
 * Return: none.
 */
void print_times_table(int n)
{
	int i, a, j, rev, len, p = 0;

	if (n >= 0 && n <= 15)
	{
		for (i = 1; i <= n ; ++i)
		{
			_putchar ('0');
			_putchar (',');
			for (a = 1; a <= 3; ++a)
				_putchar (' '); }
		_putchar ('0');
		for (i = 1; i <= n; ++i)
		{
			_putchar ('\n');
			for (j = 0; j <= n; ++j)
			{
				if (j == 0)
					_putchar ('0');
				else
				{
					p = i * j;
					rev = len = 0;
					while (p > 0)
					{
					rev = (rev * 10) + (p % 10);
					++len;
					p = p / 10; }
					_putchar (',');
					_putchar (' ');
					if (len < 3)
					{
					_putchar (' ');
					if (len < 2)
					_putchar (' '); }
					while (len > 0)
					{
						_putchar ('0' + rev % 10);
						rev = rev / 10;
						--len; }}}}
	_putchar ('\n'); }}
