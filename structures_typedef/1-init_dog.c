#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Function that initialize a variale of type struct dog.
 *
 * @d: Something.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
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

