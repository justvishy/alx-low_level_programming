#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * leet - writes a code that encodes a string to 1337
 *
 * @z: string
 *
 * Return: string
 */

char *leet(char *z)
{
	int length = strlen(z);
	int start = 0;

	while (start < length)
	{
		if ((z[start] == 'a' || z[start] == 'A') ||
		(z[start] == 'e' || z[start] == 'E') ||
		(z[start] == 'o' || z[start] == 'O') ||
	       	(z[start] == 't' || z[start] == 'T') ||
		(z[start] == 'l' || z[start] == 'L'))
		{
			z[start] = 1;
		}

		start++;
	}
	return (z);
}
