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
	int length = strlen(s);
	int length1 = strlen(accept);
	int start = 0;
	int x;
	int count = 0;

	while (start < length)
	{
		x = 0;
		while (x < length1)
		{
			if (s[start] == accept[x])
			{
				count++;
				break;
			}
			else if (accept[x] == '\0')
			{
				return (i);
			}
			start++;
		}
	}
	return (i);
}
