#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @s: pointer to string
 * @c: character to be located
 *
 * Return: a pointer to the character
 */

char *_strchr(char *s, char c)
{
	char *isFound = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			isFound = s;
			break;
		}
		++s;
	}
	if (*s == c)
		isFound = s;

return (isFound);
}
