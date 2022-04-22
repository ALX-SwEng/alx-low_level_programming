#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int num = 32;
	long int prime;

	for (prime = 2; prime < num / 2; prime++)
	{
		if (num % prime == 0)
		{
			printf ("%ld\n", prime);
			num = num / prime;
		}
	}
	printf("%ld\n", pr);
	return (0);
}

