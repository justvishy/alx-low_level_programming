#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - this free dogs
 *
 * @d: struct of dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (0);
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	if (d != NULL)
		free(d);
}
