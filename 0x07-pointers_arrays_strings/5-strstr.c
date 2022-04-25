#include "main.h"
#include <string.h>

/**
 * _strstr -  searches a string for any of a set of bytes.
 *
 * @haystack: pointer to string
 * @needle: substring to be located
 *
 * Return: a pointer to the byte in string
 */

char *_strstr(char *haystack, char *needle)
{
	char *or_haystack = haystack, *or_needle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (or_haystack);
		}
		needle = or_needle;
		or_haystack++;
		haystack = or_haystack;
	}
	return (0);
}
