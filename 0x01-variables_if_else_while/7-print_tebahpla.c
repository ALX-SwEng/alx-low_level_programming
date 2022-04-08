#include <stdio.h>
/* more headers goes there */

/**
* main - print lowercase alphabet
* Return: program returns 0
*/
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

