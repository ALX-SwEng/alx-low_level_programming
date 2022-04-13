#include <stdio.h>
#include <stdint.h>

/**
 * main - print fibnonic series
 *
 * Return: Always success.
 */

int main(void)
{
	unsigned long int n1 = 0, n2 = 1, n3, i;

	for (i = 1; i <= 98; ++i)
	{
		n3 = n1 + n2;

		if (i < 98)
			printf("%llu, ", n3);
		else
			printf("%llu", n3);
		n1 = n2;
		n2 = n3;
	}
	putchar('\n');

	return (0);
}
