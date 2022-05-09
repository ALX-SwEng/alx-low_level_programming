#include "dog.h"

/**
* int_dog - initialize dog structure
*
* @d: structure object
* @name: 1st member
* @age: 2nd member
* @owner: 3rd member
*/

void int_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		while(*name)
			d->name++ = *name++;

		d->age = age;

		while (*owner)
			d->owner++ = *owner++;
	}
}
