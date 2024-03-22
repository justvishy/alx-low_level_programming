#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * cap_string - capitalizes the space
 *
 * @z: string
 *
 * Return: the completed string
 */

char *cap_string(char *z)
{
	int length = strlen(z);
	int start = 0;

	while (start < length)
	{
		int cap = toupper(z[start + 1]);

		if (isspace(z[start]) || z[start] == '}')
		{
			z[start + 1] = cap;
		}
		else if (z[start] == ',' || z[start] == ';' || z[start] == '.')
		{
			z[start + 1] = cap;
		}
		else if (z[start] == '!' || z[start] == '?' || z[start] == '"')
		{
			z[start + 1] = cap;
		}
		else if (z[start] == '(' || z[start] == ')' || z[start] == '{')
		{
			z[start + 1] = cap;
		}

		start++;
	}
	return (z);
}
