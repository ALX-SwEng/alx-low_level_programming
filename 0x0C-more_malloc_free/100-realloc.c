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
	void *newPtr;
	int i = 0;

	if (old_size > new_size)
		return (ptr);

	if (new_size == 0 && !ptr)
	{
		free(ptr)
		return (ptr);
	}

	if (ptr == NULL)
	{
		newPtr = malloc(new_size);
		if (newPtr == NULL)
		{
			free(ptr)
			return (NULL);
		}
		else
		{
			while (i < old_size)
				newPtr[i++] = *ptr++
			return (newPtr);
		}
	}
}
