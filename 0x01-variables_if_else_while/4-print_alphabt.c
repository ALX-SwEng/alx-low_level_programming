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
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
