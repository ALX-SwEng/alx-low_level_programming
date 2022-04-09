#include <stdio.h>
/**
* main - print single digit base numbers
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
	putchar ('\n');
	return (0);
}
