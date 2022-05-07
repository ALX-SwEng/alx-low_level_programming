#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - function that concatenates the 1st n character
* of the 2nd string with the 1st string.
*
* @s1: a pointer to 1st string.
* @s2: a pointer to 2nd string.
* @n: number of character to be concatnated.
*
* Return:  a pointer to the string, or NULL if it fails.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr, *temp;
	unsigned int size, size1 = 0, size2 = 0;

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

	if (n > size2)
		n = size2;

	if (size1 == 0)
		size1 = 1;

	size = size1 + n;
	newstr = malloc(size * sizeof(char));

	if (!newstr)
		return (NULL);

	temp = newstr;
	while (*s1)
		*temp++ = *s1++;

	while (size1++ < size)
		*temp++ = *s2++;
	*temp = '\0';

return (newstr);
}
