#include <stdio.h>
/**
 * main - print fibnonic series
 *
 * Return: Always success.
 */

int main(void)
{
	long int n1 = 0, n2 = 1, n3, i;

	for (i = 1; i <= 50; ++i)
	{
		n3 = n1 + n2;

		if (i < 50)
			printf("%ld, ", n3);
		else
			printf("%ld", n3);
		n1 = n2;
		n2 = n3;
	}
	putchar('\n');

	return (0);
}
