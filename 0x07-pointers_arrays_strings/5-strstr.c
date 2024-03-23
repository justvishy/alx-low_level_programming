#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * _strstr - locates a substring.
 *
 * @haystack: char
 * @needle: char
 *
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	int z;
	int x = 0;

	while (*haystack)
	{
		z = 0;
		while (needle[z])
		{
			if (*haystack == needle[z])
			{
				z++;
				break;
			}
			else
			{
				needle[x] = haystack[z];
				return (needle);
			}
			z++;
		}
		haystack++;
	}
	return (NULL);
}
