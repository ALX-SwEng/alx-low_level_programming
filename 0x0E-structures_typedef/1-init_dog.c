#include "dog.h"

/**
* init_dog - initialize dog structure
*
* @d: structure object
* @name: 1st member
* @age: 2nd member
* @owner: 3rd member
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
