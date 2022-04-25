#include "main.h"

/**
 * _memcpy - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @dest: pointer to memory area to be copied
 * @src: pointer to memory area where to copy
 * @n: byte size
 *
 * Return: a pointer to the memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;
	
	if (src != NULL)
	{
		while (n--)
			*p++ = *src++;
	}

return (dest);
}
