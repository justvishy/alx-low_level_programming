#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - this concat n bytes of s2 string
 *
 * @s1: char
 * @s2: char
 * @n: unsigned int
 *
 * Return: char *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int s1len, s2len, x, y;
	int m = (int)(n);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = strlen(s1);
	s2len = strlen(s2);

	if (m >= s2len)
	       m = s2len;

	ptr = (char *) malloc((s1len + m + 1) * sizeof(char));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	x = 0;
	while(s1[x] != '\0')
	{
		ptr[x] = s1[x];
		x++;
	}

	y = 0;
	while (y < m || s2[y] != '\0')
	{
		ptr[x + y] = s2[y];
		y++;
	}
	ptr[x + y] = '\0';
	return (ptr);
}
