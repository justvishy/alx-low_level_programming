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
		if (z[start] == ' ' || z[start] == '\t' || z[start] == '\n')
		{
			z[start + 1] = toupper(z[start + 1]);
		}
		else if (z[start] == ',' || z[start] == ';' || z[start] == '.')
		{
			z[start + 1] = toupper(z[start + 1]);
		}
		else if (z[start] == '!' || z[start] == '?')
		{
			z[start + 1] = toupper([start]);
		}
		else if (z[start] == '"' || z[start] == '(' || z[start] == ')')
		{
			z[start + 1] = toupper(z[start + 1]);
		}
		else if (z[start] == '{' || z[start] == '}')
		{
			z[start + 1] = toupper(z[start + 1]);
		start++;
	}
	return (z);
}
