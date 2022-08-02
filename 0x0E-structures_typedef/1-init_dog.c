#include <stdio.h>
#include "dog.h"


/**
 * init_dog - it initializing a variable of type struct
 * @d - Struct dog
 * @name - of type char
 * @age - of type float
 * @owner - of type cha
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
