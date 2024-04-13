#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - this adds two strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: two strings added
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int sum;
	int n = 0;
	int o = 0;

	if (s1 == NULL)
		return (s2);
	else if (s2 == NULL)
		return (s1);

	sum = strlen(s1) + strlen(s2) + 1;
	ptr = (char *) malloc(sum * sizeof(char));

	if (ptr == NULL)
	{
		return (ptr);
	}

	while (s1[n] != '\0')
	{
		ptr[n] = s1[n];
		n++;
	}

	while (s2[o] != '\0')
	{
		ptr[n + o] = s2[o];
		o++;
	}

	ptr[n + o] = '\0';
	return (ptr);

	free(ptr);
}
