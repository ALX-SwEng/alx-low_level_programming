#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */

int main(void)
{
	long int num = 612852475143;
	long int prime;

	for (prime = 2; prime < num; prime++)
	{
		if (num % prime == 0)
		{
			num = num / prime;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
