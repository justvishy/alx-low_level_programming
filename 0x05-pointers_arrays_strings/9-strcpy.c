#include "main.h"
#include <string.h>

/**
 * _strcpy - this copies a string
 *
 * @dest: this is a string
 * @src: this is a string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int num = 0;

	while (src[num] != '\0')
	{
		dest[num] = src[num];
		num++;
	}
	dest[num] = '\0';

	return (dest);
}
