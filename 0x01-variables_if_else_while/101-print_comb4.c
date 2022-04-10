#include <stdio.h>
/**
* main - print combination of single digits
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

			putchar (n % 10 + '0');
			putchar (i % 10 + '0');
			putchar (' ');
			
			while (j <= 9)
			{
				int k = 0;
				
				while (k <= 9)
				{
					putchar (j % 10 + '0');
					putchar (k % 10 + '0');
					if (j != 9)
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
