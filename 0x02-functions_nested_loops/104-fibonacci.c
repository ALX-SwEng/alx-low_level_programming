#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int i;
	unsigned long int n1 = 0;
	unsigned long int n2 = 1;
	unsigned long int n3;
	unsigned long int l = 1000000000;
	unsigned long int n2a;
	unsigned long int n2b;
	unsigned long int n3a;
	unsigned long int n3b;

	for (i = 1; i < 91; i++)
	{
		n3 = n1 + n2;
		printf(", %lu", n3);

		n1 = n2;
		n2 = n3;
	}

	n2a = (n2 / l);
	n2b = (n2 % l);
	n3a = (n3 / l);
	n3b = (n3 % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", n3a + (n3b / l));
		printf("%lu", n3b % l);

		n3a = n3a + n2a;
		n2a = n3a - n2a;
		n3b = n3b + n2b;
		n2b = n3b - n2b;
	}
	printf("\n");
	return (0);
}
