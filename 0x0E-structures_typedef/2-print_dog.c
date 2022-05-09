#include <stdio.h>
#include <stdlib.h>
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
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age == 0)
			printf("Age: (nil)\n");
		else
			printf("age: %0.6f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %s", d->owner);
	}
}
