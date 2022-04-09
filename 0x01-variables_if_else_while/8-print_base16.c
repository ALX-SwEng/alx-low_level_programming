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
		n++;
	}

	n = 97;
	while (n <= 101)
	{
		putchar (n);
		n++;
	}
	putchar ('\n');
	return (0);
}
