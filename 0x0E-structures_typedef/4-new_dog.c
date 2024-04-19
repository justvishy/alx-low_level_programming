#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - this is a dog type
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->name = name;
	new_dog->owner = owner;

	return (new_dog);
}
