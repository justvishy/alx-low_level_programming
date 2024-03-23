#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * _strspn - this gets the length of a prefix substring
 *
 * @s: char
 * @accept: char
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int start;

	while (*s)
	{
		start = 0;
		while (accept[start])
		{
			if (*s == accept[start])
			{
				count++;
				break;
			}
			else if (accept[start + 1] == '\0')
			{
				return (count);
			}
			start++;
		}
		s++;
	}
	return (count);
}
