#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this duplicates
 *
 * @str: string
 * Return: the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;

	ptr = (char *) malloc(sizeof(str));

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		*ptr = *str;
		str++;
		ptr++;
	}
	return (ptr);
	free(ptr);
}
