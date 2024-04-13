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
	int l = strlen(str);

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
	free(str);
}
