#include "dog.h"

/**
* print_dog - print dog structure
*
* @d: dog structure object
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s", d->name);

		if (d->age == NULL)
			printf("Age: (nil)");
		else
			printf("age: %d", d->name);

		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s", d->owner);
	}
}
