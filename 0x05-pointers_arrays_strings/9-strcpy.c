#include "main.h"

/**
 * _strcpy - copies the string
 * @src: where to copy string
 * @dest: string to be copied
 *
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		++len;
	}

	*(dest + len) = '\0';

	return (src);
}
