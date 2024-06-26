#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks memory
 *
 * @b: unsigned int
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	int x;
	char *ptr;

	x = (int)(b);
	ptr = (char *) malloc(x * sizeof(char));

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
