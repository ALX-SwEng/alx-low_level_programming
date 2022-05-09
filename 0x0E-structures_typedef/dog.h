#ifndef _DOG_H_
#define _DOG_H_

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
* dog_t - Typedef for dog structure
*/
typedef struct dog dog_t;

/**
* struct dog - structure for dog object
*
*@name: 1st member
*@age: 2nd member
*@owner: 3rd member
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
