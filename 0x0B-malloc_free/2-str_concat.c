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
	char *newstr, *temp;
	unsigned int size, size1 = 0, size2 = 0, i = 0;

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

	size = size1 + size2 - 1;
	newstr = malloc(size * sizeof(char));

	if (!newstr)
		return (NULL);

	temp = newstr;
	while (*s1)
		*temp++ = *s1++;

	while (*s2)
		*temp++ = *s2++;

return (newstr);
}
