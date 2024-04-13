#include <stdlib.h>
#include "main.h"

/**
 * create_array - this creates an array
 *
 * @size: size of the array
 * @c: this is the specific character
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	int n = 0;
	char* ptr;
	int s = (int)size;

	ptr = (char*) malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else if (size == 0)
	{
		return (NULL);
	}

	while (n < s)
	{
		ptr[n] = c;
		n++;
	}
	return (ptr);
	free(ptr);
}
