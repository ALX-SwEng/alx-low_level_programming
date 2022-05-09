#ifndef _DOG_H_
#define _DOG_H_

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

/**
* dog_t - Typedef for dog structure
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
