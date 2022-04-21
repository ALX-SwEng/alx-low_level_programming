#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 *
 * Return: concatnated string
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2;

	while (*(dest + len1) != '\0')
		len1++;

	for (len2 = 0; src[len2] != '\0'; ++len2)
		dest[len1 + len2] = src[len2];

	dest[len1 + len2] = '\0';

	return (dest);
}
