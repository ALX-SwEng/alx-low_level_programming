#include "main.h"

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
	int len1 = 0, len2;

	while (*(dest + len1) != '\0')
		len1++;

	for (len2 = 0 ; len2 < n && src[len2] != '\0' ; len2++)
		dest[len1 + len2] = src[len2];

	dest[len1 + len2] = '\0';

	return (dest);
}
