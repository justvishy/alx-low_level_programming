#include "dog.h"

/**
 * init_dog - initializes the dog
 *
 * @d: dog structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	if (name == NULL)
		return (NULL);
	if (age == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
