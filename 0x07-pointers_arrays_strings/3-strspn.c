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
	unsigned int start1 = 0;
	unsigned int start2 = 0;
	int length1 = strlen(s);
	unsigned int count = 0;
	unsigned int reset = 0;

	while (start1 < length1)
	{
		reset = 0;
		while (accept[start2] != '\0')
		{
			if (s[start1] == accept[reset])
			{
				count++;
				break;
			}
			reset++;
			start2++;
		}
		start1++;
	}
	return (count);
}
