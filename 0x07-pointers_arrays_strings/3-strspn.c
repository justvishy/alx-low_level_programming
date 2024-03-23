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
	int start1 = 0;
	int start2 = 0;
	int length1 = strlen(s);
	int count = 0;

	while (start1 < length1)
	{
		start = 0;
		while (accept[start2] != '\0')
		{
			if (s[start1] == accept[start2])
			{
				count++;
				break;
			}
			start2++;
		}
		start1++;
	}
	return (count);
}
