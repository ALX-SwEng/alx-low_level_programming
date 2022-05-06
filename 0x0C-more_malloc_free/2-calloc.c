#include <stdlib.h>
#include "main.h"

/**
 * _memset - set memory
 *
 * @str: string
 * @ch: input character
 * @n: amount of bytes
 *
 * Return: string
 */

char *_memset(char *str, char ch, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		str[i++] = ch;

	return (str);
}

/**
* _calloc - allocates memory for an array using malloc.
*
* @nmemb: n elements of an array.
* @size: byte amount.
*
* Return:  pointer to the allocated memory, or NULL if it fails.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size <= 0 || nmemb == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);

	return (_memset(ptr, 0, nmemb * size));
}
