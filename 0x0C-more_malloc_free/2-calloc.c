#include <stdlib.h>
#include "main.h"

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
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
* malloc_checked - allocates memory using malloc.
*
* @b: size of the pointer to be created.
*
* Return:  pointer to the allocated memory, or 98 if it fails.
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
