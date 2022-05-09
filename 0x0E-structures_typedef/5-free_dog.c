#include <stdlib.h>
#include "dog.h"

/**
* free_dog - unallocated dog object
*
* @d: structure pointer param
*/

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
