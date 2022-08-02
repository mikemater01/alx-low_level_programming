#ifndef _DOG_H_
#define _DOG_H_

/**
 *struct dog - This is a structure for an object called dog
 *@name: This is an element for name
 *@age: This is an element for age
 *@owner: This is an element for owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
