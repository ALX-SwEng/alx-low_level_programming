#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - allocates memory using malloc.
*
* @b: size of the pointer to be created.
*
* Return:  pointer to the allocated memory, or 98 if it fails.
*/

void *malloc_checked(unsigned int b)
{
	if (malloc(b))
	{
		return (malloc(b));
	}

	return (98);
}