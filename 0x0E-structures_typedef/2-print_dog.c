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
	char *n = d->name;
	char *o = d->owner;

	if (n == NULL)
		n = "(nil)";
	if (o == NULL)
		o = "(nil)";

	if (d != NULL)
		printf("Name: %s\nAge: %lf\nOwner: %s", n, d->age, o);
}
