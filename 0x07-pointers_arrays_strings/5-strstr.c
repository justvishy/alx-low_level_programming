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
	while (*haystack != '\0')
	{
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}

		if (*haystack == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
