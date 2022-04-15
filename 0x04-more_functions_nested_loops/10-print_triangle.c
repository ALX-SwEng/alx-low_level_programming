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
		int i;

		for (i = 0; i < size; ++i)
		{
			int j;

			for (j = size; j > i; --j)
				_putchar(' ');

			int k;

			for (k = 0; k <= i; ++k) 
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
