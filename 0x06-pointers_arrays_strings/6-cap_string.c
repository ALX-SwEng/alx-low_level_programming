#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: string pointer
 *
 * Return: string capitalized string.
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char s1, s2;
	char sp[] = "\t\n,;.!\?\"(){} ";

	while (*(str + i) != '\0')
	{
		s1 = *(str + i);

		if ((s1 >= 'a' && s1 <= 'z')
		|| (s1 >= 'A' && s1 <= 'Z')
		|| (s1 >= '0' && s1 <= '9'))
		{
			++i;
			continue;
		}

		for (j = 0; sp[j] != '\0'; ++j)
		{
			if (s1 == sp[j])
			{
				if (s1 == '\t')
					*(str + i) = ' ';

				s2 = *(str + i + 1);
				if (s2 >= 'a' && s2 <= 'z')
				{
					++i;
					*(str + i) = s2 - 32;
				}			
			}

		}
		i++;
	}
	return (str);
}
