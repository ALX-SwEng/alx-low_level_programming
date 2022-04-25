#include "main.h"
#include <string.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 *
 * @s: pointer to string
 * @accept: substring to be located
 *
 * Return: a pointer to the byte in string
 */

char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);

	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}

return (NULL);
}
