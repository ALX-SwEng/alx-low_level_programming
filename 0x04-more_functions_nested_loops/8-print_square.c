#include "main.h"

/**
* print_square - print square shape
* @n: square side length
* Return: none.
*/

void print_square(int size)
{
	if (n > 0)
	{
		int i, j;

		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= n; ++j)
				_putchar('#');
 
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
