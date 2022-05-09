#include <stdio.h>

/**
 * main - the 1st 98 fibonacci series
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int limit = 1000000000;
	unsigned long int a1;
	unsigned long int a2;
	unsigned long int b1;
	unsigned long int b2;

	printf("%lu", n1);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", n2);
		n2 += n1;
		n1 = n2 - n1;
	}

	a1 = (n1 / limit);
	a2 = (n1 % limit);
	b1 = (n2 / limit);
	b2 = (n2 % limit);

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
