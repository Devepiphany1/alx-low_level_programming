#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a struct typed var named dog
 * @d: Pointer to struct dog to initialize
 * @name: Initialized name
 * @age: Second member
 * @owner: Third Member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		if (d == NULL)
			d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
