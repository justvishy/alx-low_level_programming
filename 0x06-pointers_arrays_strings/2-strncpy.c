#include "main.h"
#include <string.h>

/**
 * _strncpy - this copied the string
 *
 * @dest: this is a string
 * @src: this is a string
 * @n: this is an integer
 *
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int num = 0;

	while (num < n && src[num] != '\0')
	{
		dest[num] = src[num];
		num++;
	}

	while (num < n)
	{
		dest[num] = '\0';
		num++;
	}

	return (dest);
}
