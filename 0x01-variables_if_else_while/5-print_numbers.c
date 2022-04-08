#include <stdio.h>
/**
* main - print single digit base numbers
* Return: program returns 0
*/
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar (n);
		n++;
	}
	putchar ('\n');
	return (0);
}
