#include "main.h"

/**
 * print_triangle -  Make a triangle with #
 * @size: size of the triangle
 * Return: none.
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k;

		for (i = 0; i < size; ++i)
		{
			for (j = size - 1; j > i; --j)
				_putchar(' ');

			for (k = 0; k <= i; ++k)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
