#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - this is a dog type
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));
	
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(dog->name);
		return (NULL)

	return (new_dog);
}
