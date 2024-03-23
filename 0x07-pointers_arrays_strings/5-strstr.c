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
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}

		if (*y == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
