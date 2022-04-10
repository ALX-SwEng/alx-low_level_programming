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
			if (i != n)
			{
				putchar (n % 10 + '0');
				putchar (i % 10 + '0');
				if (n != 8)
				{
					putchar (',');
					putchar (' ');
				}
			}
			i++;
		}
		n++;
	}
	putchar ('\n');
	return (0);
}
