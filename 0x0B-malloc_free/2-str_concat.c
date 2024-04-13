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
	char length = 1;
	char *empstr;
	int n = 0;
	int o = 0;

	empstr = (char *) malloc((length + 1) * sizeof(char));
	ptr = (char *) malloc(sum * sizeof(char));
	empstr[0] = '\0';

	if (s1 == NULL && s2 == NULL)
	{
		s1 = empstr;
		s2 = empstr;
	}
	else if (s1 == NULL)
		s1 = empstr;
	else if (s2 == NULL)
		s2 = empstr;

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
	free(ptr);
	free(empstr);
}
