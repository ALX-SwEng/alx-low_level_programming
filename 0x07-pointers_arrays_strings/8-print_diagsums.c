#include "main.h"

/**
 * print_diagsums -  prints sums of square array diagonal
 *
 * @a: a pointer
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i, j, sumd1 = *a , sumd2 = 0;

	for (i = 1; i <= size ; ++i)
	{
		if (i != size)
		{
			int d1 = (i * size) + i ;
			sumd1 += *(a + d1);
		}

		int d2 = (size - 1) * i;		
		sumd2 += *(a + d2);
	}

	printf("%d, ", sumd1);
	printf("%d\n", sumd2);
}

