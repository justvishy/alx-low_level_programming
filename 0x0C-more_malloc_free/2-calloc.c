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
	void *ptr;
	int siz, x, y, z;

	x = (int)(nmemb);
	y = (int)(size);

	if (x == 0)
		return (NULL);
	if (y == 0)
		return (NULL);

	siz = x * y;

	if (siz / y != x)
		return (NULL);

	ptr = (int *) malloc(siz);

	if (ptr == NULL)
		return (NULL);

	z = 0;
	while (z < siz)
	{
		((char *) ptr)[z] = 0;
		z++;
	}
	return (ptr);
}
