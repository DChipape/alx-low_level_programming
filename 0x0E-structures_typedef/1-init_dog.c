#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of struct dog
 * @d: pointer to struct dog
 * @name: pointer to dog name
 * @age: age of the dog
 * @owner: pointer to the dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
