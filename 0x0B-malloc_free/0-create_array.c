#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
*
* @size: size of the array string to be created.
* @c: character to initalize the string
* Return:  a pointer to the array, or NULL if it fails.
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		str = malloc(size * sizeof(char));
		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; ++i)
				str[i] = c;
		}
	}

	return (str);
}

