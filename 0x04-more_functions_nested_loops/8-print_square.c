#include "main.h"

/**
* print_square - print square shape
* @size: square side length
* Return: none.
*/

void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		for (i = 1; i <= size; ++i)
		{
			for (j = 1; j <= size; ++j)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
