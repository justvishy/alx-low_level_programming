#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * _memcpy - copies memory area.
 *
 * @dest: char
 * @src: char
 * @n: unsigned int
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int z = 0;

	while (z < n)
	{
		dest[z] = src[z];
		z++;
	}
	return (dest);
}
