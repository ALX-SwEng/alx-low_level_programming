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
			--size;
			str[size] = '\0'; 
			while (size >= 0)
				str[size] = c;
		}
	}

	return (str);
}

