#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @str: string pointer
 *
 * Return: encoded string.
 */
char *leet(char *str)
{
	int i = 0, j;
	char s;
	char rs[11] = {"aAeEoOtTlL"};
	char rd[6] = {"43071"};

	while (*(str + i) != '\0')
	{
		s = *(str + i);
		for (j = 0; j < 10; ++j)
			if (s == rs[j])
			*(str + i) = rd[j / 2];

		i++;
	}
	return (str);
}
