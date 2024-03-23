#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: char
 * @accept: char
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int z;

	while (*s)
	{
		z = 0;
		while (accept[z])
		{
			if (*s == accept[z])
			{
				return (s);
			}
			z++;
		}
		s++;
	}
	return (NULL);
