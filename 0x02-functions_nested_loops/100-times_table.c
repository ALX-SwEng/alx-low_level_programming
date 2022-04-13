#include "main.h"

/**
 * print_times_table - print the N times table, starting with 0.
 * @n: time table size
 * Return: none.
 */
void print_times_table(int n)
{
	int i, a, j, r1, r2, r3, p = 0;
	
	if (n >= 0 && n <= 15)
	{
		for (i = 1; i <= n + 1; ++i)
		{
			_putchar ('0');
			if (i <= n)
			{
				putchar (',');
				for (a = 1; a <= 3; ++a)
					_putchar (' ');	}}
		_putchar ('\n');
		for (i = 1; i <= n; ++i)
		{
			for (j = 0; j <= n; ++j)
			{
				if (j == 0) _putchar ('0');
				else
				{
					p = i * j;
					_putchar (','); 
					_putchar (' ');
					if (p <= 9)
					{ _putchar (' '); 
					 _putchar (' '); 
					 _putchar ('0' + p); }
					else if (p <= 99)
					{ _putchar (' ');
					 r1 = p % 10; 
					 r2 = p / 10;			
					 _putchar(r2 + '0');
						_putchar(r1 + '0'); }
					else
					{
						r1 = p % 10; 
						p = p / 10; 
						r2 = p % 10; 
						p = p / 10; 
						r3 = p % 10;
						_putchar(r3 + '0');
						_putchar(r2 + '0');
						_putchar(r1 + '0'); }}}
			_putchar ('\n');	}}}
