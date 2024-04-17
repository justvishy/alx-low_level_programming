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
	int x, y, s1len, s2len, total_len, m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	m = (int)(n)
	s1len = strlen(s1);
	s2len = strlen(s2);

	if (m >= s2len)
		m = s2len;

	total_len = s1len + m + 1;
	ptr = (char *) malloc(total_len * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	x = 0;
	while (x < s1len)
	{
		ptr[x] = s1[x];
		x++;
	}

	y = 0;
	while (y < m)
	{
		ptr[x + y] = s2[y];
		y++;
	}

	ptr[x + y] = '\0';
	return (ptr);
}
