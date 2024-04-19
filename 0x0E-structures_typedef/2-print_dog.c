#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - this prints the dog
 *
 * @d: struct of the dog
 */

void print_dog(struct dog *d)
{
	char *n;
	char *o;

	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	n = d->name;
	o = d->owner;
	if (d != NULL)
		printf("Name: %s\nAge: %f\nOwner: %s\n", n, d->age, o);
}
