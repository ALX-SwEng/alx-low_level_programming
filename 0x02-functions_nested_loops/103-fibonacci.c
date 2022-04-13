#include <stdio.h>
/**
 * main - print sum of even term of fibnonic series
 *
 * Return: Always success.
 */

int main(void)
{
	long int n1 = 0, n2 = 1, n3, sum = 0;

	do {
		n3 = n1 + n2;
		if (n3 % 2 == 0)
			sum += n3;
		n1 = n2;
		n2 = n3;
	} while (n3 <= 4000000);

	printf("%ld\n", sum);

	return (0);
}
