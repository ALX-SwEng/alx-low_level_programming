/**
 * _strncpy - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: no. of character to be concatnated.
 *
 * Return: concatnated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (len < n)
	{
		*(dest + len) = *(src + len);
		++len;
	}

	return (dest);
}
