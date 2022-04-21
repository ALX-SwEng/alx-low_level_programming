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
	int len;

	for (len = 0; len < n && *src != '\0'; ++len)
		*(dest + len) = *src++;

	for (; len < n; ++len)
		*(dest + len) = '\0';

	return (dest);
}
