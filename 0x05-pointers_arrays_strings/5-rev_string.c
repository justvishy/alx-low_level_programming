#include "main.h"

/**
 * rev_string - this prints the string in reverse
 *
 * @s: this is a string
 */

void rev_string(char *s)
{
	int num = 0;
	int num1 = 0;

	while (s[num] != '\0')
	{
		num++;
	}

	char str[num];

	while (num != 0)
	{
		str[num1] = s[num];

		num1++;
		num--;
	}
}
