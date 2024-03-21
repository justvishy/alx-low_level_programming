#include "main.h"
#include <string.h>

/**
 * _strcat - this adds two strings together
 *
 * @dest: this is a string
 * @src: this is a string
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int length = strlen(dest);
	int count = 0;

	while (src[count] != '\0')
	{
		dest[length] = src[count];

		length++;
		count++;
	}

	dest[length] = '\0';

	return (dest);
}
