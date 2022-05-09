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
		int i = 0, j = 0;

		while(*name)
			d->name[i++] = *name++;

		d->age = age;

		while (*owner)
			d->owner[j++] = *owner++;
	}
}
