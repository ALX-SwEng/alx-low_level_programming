#include <stdlib.h>
#include "main.h"

/**
* _strdup - create a pointer to a new string
* which is a duplicate of the string str.
* Memory for the new string is obtained with malloc.
*
* @str: a pointer to string
*
* Return:  a pointer to the array, or NULL if it fails.
*/

char *_strdup(char *str)
{
	char *newstr;
	unsigned int i, size = 0;

	if (!str)
	{
		return (NULL);
	}

	while (*(str + size++))
		;

	newstr = malloc(size * sizeof(char));
	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; ++i)
			newstr[i] = str[i];
	}

return (newstr);
}
