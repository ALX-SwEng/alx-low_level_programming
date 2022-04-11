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
				int ctrl = 0;

				while (k <= 9)
				{
					if (!ctrl)
					{
						k = i + 1;
						ctrl = 1;
					}

					putchar (n % 10 + '0');
					putchar (i % 10 + '0');
					putchar (' ');
					putchar (j % 10 + '0');
					putchar (k % 10 + '0');

					if (i != 8)
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
