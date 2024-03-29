#include "main.h"
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * string_toupper - this makes all lowercase alpha to uppercases
 *
 * @z: this is the string
 * Return: uppercases
 */

char *string_toupper(char *z)
{
	int start = 0;
	int length = strlen(z);

	while (start < length)
	{
		if (isupper(z[start]) == false)
		{
			z[start] = toupper(z[start]);
		}
		start++;
	}
	return (z);
}
