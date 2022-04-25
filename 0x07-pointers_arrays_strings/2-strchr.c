#include "main.h"

/**
 * _strchr - locates a character in a string.
 *
 * @char: pointer to string
 * @c: character to be located
 *
 * Return: a pointer to the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		++s;
	}
	if (*s == c)
		return (s);

return (0);
}
