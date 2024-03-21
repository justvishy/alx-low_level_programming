#include "main.h"
#include <string.h>

/**
 * _strcmp - this is a function
 *
 * @s1: input 1
 * @s2: input 2
 * Return: number
 */

int _strcmp(char *s1, char *s2)
{
	int num = 0;

	while (s1[num] != '\0' && s2[num] != '\0')
	{
		if (s1[num] - s2[num] == 0)
		{
			num++;
		}
		else
		{
			return (s1 - s2);
		}
	}
}
