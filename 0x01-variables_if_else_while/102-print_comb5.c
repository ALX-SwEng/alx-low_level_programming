#include <stdio.h>

/**
  * main - Prints 3 combination of numbers
  *
  * Return: Always (Success)
  */
int main(void)
{
	int c = 0, i, k, j;

	while (c <= 9)
	{
		i = 0;
		while (i <= 9)
		{
			k = 0;
			while( k <= 9)
			{
				j = 0;
				while (j <= 9)
				{
					if (((k + j) > (c + i) &&  k >= c) || c < k)
					{
						putchar(c);
						putchar(i);
						putchar(' ');						
						putchar(k);
						putchar(j);

					if (c + i + k + j == 227 && c == 57)
					{
					break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
					j++;
				}
				k++;
			}
			i++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
