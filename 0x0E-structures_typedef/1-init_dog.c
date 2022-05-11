#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function to initialize a variable of type struct dog
 * @d: pointer to structure
 * @name: pointer to name of the dog
 * @age: age
 * @owner: pointer to owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
