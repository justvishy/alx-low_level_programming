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
	char letter[5] = "AEOTL";
	char number[5] = "43071";
	int x;

	while (start < length)
	{
		x = 0;
		while (toupper(z[start]) != letter[x] && x < 5)
		{
			x++;
		}
		
		if (toupper(z[start]) == letter[x])
		{
			z[start] = number[x];
		}
		start++;
	}
	return (z);
}
