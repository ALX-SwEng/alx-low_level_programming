/**
 * _strcat - concatenates two strings.
 * @str: string pointer
 *
 * Return: concatnated string
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0, i;

	while (*(dest + len1) != '\0')
	{
		len1++;
	}

	while (*(src + len2) != '\0')
	{
		i = len1 + len2;
		*(dest + i) = *(src + len2);
		++len2;
	}

	*(dest + i + 1) = '\0';

	return (dest);
}
