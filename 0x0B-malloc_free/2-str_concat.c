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
	unsigned int i, j = 0, size1 = 0, size2 = 0;

	if (s1 == NULL)
		*s1 = '\0';
	if (s2 == NULL)
		*s2 = '\0';

	while (*(s1 + size1++))
		;
	while (*(s2 + size2++))
		;

	newstr = malloc((size1 + size2 - 1) * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size1 - 1; ++i, ++j)
			newstr[j] = s1[i];

		for (i = 0; i < size2; ++i, ++j)
			newstr[j] = s2[i];
	}

return (newstr);
}
