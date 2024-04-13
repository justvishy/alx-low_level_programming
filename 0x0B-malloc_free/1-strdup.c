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
	int l = strlen(str);

	ptr = (char *) malloc(l * sizeof(char));

	if (str == NULL)
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
	free(str);
}
