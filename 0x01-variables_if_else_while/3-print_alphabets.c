#include <stdio.h>
/* more headers goes there */

/**
* main - print lowercases alphabet
* followed by uppercase alphabets
* Return: program returns 0
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}

