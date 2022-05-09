#include <stdlib.h>
#include "dog.h"

/**
* free_dog - unallocated dog object
*
* @d: structure pointer param
*/

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
