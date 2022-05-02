#include <stdlib.h>
#include "main.h"

/**
* str_concat - function that concatenates two strings,
* using dynamic memory allocation (malloc).
*
* @s1: a pointer to 1st string
* @s2: a pointer to 2nd string
*
* Return:  a pointer to the string, or NULL if it fails.
*/

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	unsigned int i, j = 0, size, size1 = 0, size2 = 0;

	if (!s1)
		s1 = "";
	else
		while (*(s1 + size1++))
			;

	if (!s2)
		s2 = "";
	else
		while (*(s2 + size2++))
			;

	if (size1 == 0 && size2 == 0)
	{
		newstr = "";
		return (newstr);
	}
	else
	{
		size = size1 + size2 - 1;
		newstr = malloc(size * sizeof(char));
	}

	if (newstr)
	{
		for (i = 0; i < size1; ++i, ++j)
			newstr[j] = s1[i];

		for (i = 0; i < size2; ++i, ++j)
			newstr[j] = s2[i];

		return (newstr);
	}

return (NULL);
}