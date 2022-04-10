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

			while (j <= 9)
			{
				if (n != i && i != j)
				{
					putchar (n % 10 + '0');
					putchar (i % 10 + '0');
					putchar (j % 10 + '0');
					if (n != 7)
					{
						putchar (',');
						putchar (' ');
					}
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
