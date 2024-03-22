#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: char
 * @b: char
 * @n: unsigned int
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int z = 0;

	while (z < n)
	{
		s[z] = b;
		++z;
	}
	return (s);
}
