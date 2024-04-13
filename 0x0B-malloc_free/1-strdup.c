#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - this duplicates
 *
 * @str: string
 * Return: the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	int n = 0;

	ptr = (char *) malloc(strlen(str) + 1);

	if (str == NULL || strlen(str) + 1 < 1)
	{
		return (NULL);
	}

	while (*str)
	{
		ptr[n] = *str;
		str++;
		n++;
	}
	return (ptr);
	free(ptr);
}
