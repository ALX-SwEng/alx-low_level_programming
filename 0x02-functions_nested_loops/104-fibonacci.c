#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int n1 = 0;
	unsigned long int n2 = 1;
	unsigned long int n3;
	unsigned long int limit = 1000000000;
	unsigned long int a1;
	unsigned long int a2;
	unsigned long int b1;
	unsigned long int b2;

	for (i = 1; i < 91; i++)
	{
		n3 = n1 + n2;
		printf(", %lu", n3);
		n1 = n2;
		n2 = n3;
	}

	a1 = (n2 / limit);
	a2 = (n2 % limit);
	b1 = (n3 / limit);
	b2 = (n3 % limit);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", b1 + (b2 / limit));
		printf("%lu", b2 % limit);
		b1 = b1 + a1;
		a1 = b1 - a1;
		b2 = b2 + a2;
		a2 = b2 - a2;
	}
	printf("\n");
	return (0);
}
