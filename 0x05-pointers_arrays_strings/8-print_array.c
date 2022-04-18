#include "main.h"
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: array pointer
 * @n: array size
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));

		if (i != n - 1)
		printf(", ");

		i++;
	}
	putchar('\n');
}
