#include "main.h"

/**
* print_diagonal - print diagonal line
* @n: diagonal length
* Return: none.
*/

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j < i; ++j)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
