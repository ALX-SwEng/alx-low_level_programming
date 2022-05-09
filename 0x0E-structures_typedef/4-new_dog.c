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

	int nln = 0, oln = 0, c;
	dog_t *doge;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;

	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}

	doge->name = malloc(nln * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (c = 0; c <= nln; c++)
		doge->name[k] = name[k];

	doge->age = age;
	doge->owner = malloc(oln * sizeof(doge->owner));
	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (c = 0; c <= oln; c++)
		doge->owner[k] = owner[k];
	return (doge);
}
