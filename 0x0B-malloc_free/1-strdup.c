#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this duplicates
 *
 * @str: string
 * Return: the duplicated string
 */

int main(void)
{
	char *ptr;
	int n = 0;

	if (ptr == NULL)
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
