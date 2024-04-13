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
	int sum1 = strlen(s1);
	int x = (int)(sum1);
	int sum = (strlen(s1) + 1) + (strlen(s2) + 1);
	int n = 0;
	char *nl = " ";

	if (s1 == NULL && s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}
	else if (s1 == NULL)
	{
		s1 = " ";
	}
	else if (s2 == NULL)
	{
		s2 = " ";
	}

	ptr = (char *) malloc(sum * sizeof(char));

	if (ptr == NULL)
	{
		ptr = " ";
		return (ptr);
	}

	while (n < x + 3)
	{
		ptr[n] = *s1;
		n++;
		s1++;
	}
	ptr[n] = *nl;

	while (n < sum)
	{
		n++;
		ptr[n] = *s2;
		s2++;
	}
	return (ptr);
	free(ptr);
}
