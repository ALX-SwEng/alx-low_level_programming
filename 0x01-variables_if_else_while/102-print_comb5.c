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
			int j = i;
			
			while (j <= 9)
			{
				int k = 0;

				while (k <= 9)
				{
					if (n == 0 && i == 0 && j == 0 && k == 0)
						k++;

					putchar (n % 10 + '0');
					putchar (i % 10 + '0');
					putchar (' ');
					putchar (j % 10 + '0');
					putchar (k % 10 + '0');
					
					if (j != 8)
					{
						putchar (',');
						putchar (' ');
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
