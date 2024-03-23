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
	int found = 0;

	while (start < length)
	{
		if (s[start] != c)
		{
			start++;
		}
		else
		{
			found = 1;
		}
	}

	if (found == 1)
	{
		return (s[start]);
	}
	else
	{
		return (NULL);
	}
}
