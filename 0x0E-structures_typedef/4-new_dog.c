#include <stdlib>
#include "dog.h"

/**
* new_dog - create new dog object
*
* @name: 1st member
* @age: 2nd member
* @owner: 3rd member
*/

void new_dog(char *name, float age, char *owner)
{
	struct dog *newDog;

	newDog = malloc(sizeof(struct dog));
	if (!newDog)
		return (NULL);

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
}
