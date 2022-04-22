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

	for (i = 1; i <= 91; ++i)
	{
		n3 = n1 + n2;
		printf("%lu, ", n3);

		n1 = n2;
		n2 = n3;
	}
	
	unsigned long int limit;
	unsigned long int n2a;
	unsigned long int n2b;
	unsigned long int n3a;
	unsigned long int n3b;
	
	limit = 1000000000;
	n2a = (n2 / limit);
	n2b = (n2 % limit);
	
	n3a = (n3 / limit);
	n3b = (n3 % limit);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", n3a + (n3b / limit));
		printf("%lu", n3b % limit);
		n3a = n3a + n2a;
		n2a = n3a - n2a;
		n3b = n3b + n2b;
		n2b = n3b - n2b;
	}
	
	putchar('\n');

	return (0);
}
