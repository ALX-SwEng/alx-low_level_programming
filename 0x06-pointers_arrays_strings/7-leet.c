/**
 * leet - encodes a string into 1337.
 * @str: string pointer
 *
 * Return: encoded string.
 */
char *leet(char *str)
{
	int i = 0;
	char s;

	while (*(str + i) != '\0')
	{
		s = *(str + i);

		if (s == 'a' || s == 'A')
			*(str + i) = '4';
		else if (s == 'e' || s == 'E')
			*(str + i) = '3';
		else if (s == 'o' || s == 'O')
			*(str + i) = '0';
		else if (s == 't' || s == 'T')
			*(str + i) = '7';
		else if (s == 'l' || s == 'L')
			*(str + i) = '1';

		i++;
	}

	return (str);
}
