#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * malloc_checked - checks memory
 * 
 * @b: unsigned int
 */

void *malloc_checked(unsigned int b)
{
	int x;
	char *ptr;

	x = (int)(b);
	ptr = (char *) malloc(x * sizeof(char));

	if (ptr == NULL)
		_exit(98);

	return;
}
