#include <stdio.h>
/**
* main - prints all possible combinations of 2 two-digit numbers
* Return: Always (Success)
*/
int main(void)
{
	int n = 0, i, j, k;

	while (n <= 9)
	{
		i = 0;
		while (i <= 9)
		{
			j = n;
			while (j <= 9)
			{
				if (n == j)
					k = i + 1;
				else
					k = 0;
				while (k <= 9)
				{
					putchar(n + '0');
					putchar(i + '0');
					putchar(' ');
					putchar(j + '0');
					putchar(k + '0');

					if (n + i + j + k == 35 && n == 9)
					{ break; }
					else
					{
					putchar(',');
					putchar(' ');
					}
					k++;
				}
				j++;
				}
			i++;
			}
		n++;
		}
	putchar('\n');
	return (0);
}
