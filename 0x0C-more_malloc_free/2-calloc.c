#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function clears memory
 *
 * @nmemb: unsigned int
 * @size: unsigned int
 *
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr, x, y, z;

	x = (int)(nmemb);
	y = (int)(size);

	if (x == 0)
		return (NULL);
	if (y == 0)
		return (NULL);

	ptr = (int *) malloc(x * y);

	if (ptr == NULL)
		return (NULL);

	z = 0;
	while (z < x)
	{
		ptr[z] = 0;
		z++;
	}
	return (ptr);
}
