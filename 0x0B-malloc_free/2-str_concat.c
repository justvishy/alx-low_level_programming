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
	int sum = strlen(s1) + strlen(s2) + 1;
	char arry[1] = {'\0'};
	int n = 0;
	int o = 0;

	ptr = (char *) malloc(sum * sizeof(char));

	if (s1 == NULL && s2 == NULL)
	{
		s1 = arry;
		s2 = arry;
	}
	else if (s1 == NULL)
		s1 = arry;
	else if (s2 == NULL)
		s2 = arry;

	if (ptr == NULL)
	{
		return (NULL);
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
}
