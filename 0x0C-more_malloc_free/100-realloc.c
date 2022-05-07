#include <stdlib.h>
#include "main.h"

/**
* _realloc - reallocates a memory block using malloc and free.
*
* @ptr: a pointer to the memory previously allocated.
* @old_size: the size, in bytes, of the allocated space for ptr.
* @new_size: the new size, in bytes of the new memory block.
*
* Return: pointer to the newly created array, or NULL if it fails.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reallocPtr, *clonePtr;
	unsigned int i = 0;

	if (ptr == NULL)
		return (malloc(new_size));

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	reallocPtr = malloc(new_size);
	if (reallocPtr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	clonePtr = ptr;
	if (old_size > new_size)
		old_size = new_size;

	while (i < old_size)
	{
		reallocPtr[i] = clonePtr[i];
		++i;
	}

	free(ptr);
	return (reallocPtr);
}
