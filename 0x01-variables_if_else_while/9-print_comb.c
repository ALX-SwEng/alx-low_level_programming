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
		putchar (n % 10 + '0');
		if (n < 9)
		{
			putchar (',');
			putchar (' ');
		}
		n++;
	}
	putchar ('\n');
	return (0);
}
