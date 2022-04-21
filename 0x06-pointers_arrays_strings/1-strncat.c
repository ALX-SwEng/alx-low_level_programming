/**
 * _strncat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: no. of character to be concatnated.
 *
 * Return: concatnated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0, i;

	while (*(dest + len1) != '\0')
		len1++;

	while (*(src + len2) != '\0' && len2 < n)
	{
		i = len1 + len2;
		*(dest + i) = *(src + len2);
		++len2;
	}

	*(dest + i + 1) = '\0';

	return (dest);
}
