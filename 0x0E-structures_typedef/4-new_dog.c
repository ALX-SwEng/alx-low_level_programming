#include <stdlib.h>
#include "dog.h"

/**
* new_dog - create new dog object
*
* @name: 1st member
* @age: 2nd member
* @owner: 3rd member
*
*Return: pointer to structure, Null if fail
*/

dog_t *new_dog(char *name, float age, char *owner)
{

	int name_ln = 0, owner_ln = 0, c;
	dog_t *doge;

	while (name[name_ln] != '\0')
		name_ln++;
	while (owner[owner_ln] != '\0')
		owner_ln++;

	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}

	doge->name = malloc(name_ln * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (c = 0; c <= name_ln; c++)
		doge->name[c] = name[c];

	doge->age = age;
	doge->owner = malloc(owner_ln * sizeof(doge->owner));
	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (c = 0; c <= owner_ln; c++)
		doge->owner[c] = owner[c];
	return (doge);
}
