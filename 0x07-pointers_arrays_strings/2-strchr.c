#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * _strchr -  locates a character in a string
 *
 * @s: char
 * @c: char
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int length = strlen(s);
	int start = 0;

	while (start < length)
	{
		if (s[start] != c)
		{
			start++;
		}
		else
		{
			return (&s[start]);
		}
	}

	if (c == '\0')
	{
		s[start] = '\0';
		return (&s[start]);
	}

	return (NULL);
}
