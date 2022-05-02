#include <stdlib.h>
#include "main.h"

/**
* _strdup - create a pointer to a new string
* which is a duplicate of the string str.
* Memory for the new string is obtained with malloc.
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
		*s1 = '';
	if (!s2)
		*s2 = '';

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
