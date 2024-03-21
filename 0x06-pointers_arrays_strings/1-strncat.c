#include "main.h"
#include <string.h>

/**
 * _strncat - this appends the strings
 *
 * @dest: this is a string
 * @src: this is a string
 * @n: this is an integer
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = strlen(dest);
	int count = 0;

	while (count < n)
	{
		dest[length] = src[count];
		length++;
		count++;
	}
	return (dest);
}
