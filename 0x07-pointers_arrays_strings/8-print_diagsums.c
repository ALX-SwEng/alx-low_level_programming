#include "main.h"

/**
 * print_diagsums -  prints sums of square array diagonal
 *
 * @a: a pointer
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i, sumd1 = *a, sumd2 = 0;

	for (i = 1; i <= size ; ++i)
	{
		if (i != size)
			sumd1 += *(a + (i * size) + i);

		sumd2 += *(a + (size - 1) * i);
	}

	printf("%d, ", sumd1);
	printf("%d\n", sumd2);
}
