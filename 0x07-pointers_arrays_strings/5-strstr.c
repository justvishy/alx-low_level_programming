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

	while (*haystack)
	{
		z = 0;
		while (needle[z])
		{
			if (*haystack == needle[0])
			{
				return (haystack);
			}
			z++;
		}
		haystack++;
	}
	return (NULL);
}
