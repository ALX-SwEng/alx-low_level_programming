#include <stdio.h>
/**
* main - print combination of two digits
* Return: program returns 0
*/
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		int i = n;

		while (i <= 9)
		{
			int j = 0;

			while (j <= 9)
			{
				int k = 0;

				while (k <= 9)
				{
					if (((j + k) > (n + i) &&  j >= n) || n < j)
					{
						putchar(n);
						putchar(i);
						putchar(' ');
						
						putchar(j);
						putchar(k);

					if (n + i + j + k == 227 && n == 57)
					{
					break;
					}
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
	putchar ('\n');
	return (0);
}
