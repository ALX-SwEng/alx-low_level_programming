#include "main.h"

/**
 * leet - encodes a string using rot13.
 * @str: string pointer
 *
 * Return: encoded string.
 */

char *rot13(char *str)
{
	int i = 0;
	unsigned char s;

	while (*(str + i) != '\0')
	{
		s = *(str + i);
		if (s >= 'a' && s <= 'z')
		{
			s += 13;
			if (s > 'z')
				s -= 26;
			str[i] = s;
		}
		else if (s >= 'A' && s <= 'Z')
		{
			s += 13;
			if (s > 'Z')
				s -= 26;
			str[i] = s;
		}
		i++;
	}
	return (str);
}
