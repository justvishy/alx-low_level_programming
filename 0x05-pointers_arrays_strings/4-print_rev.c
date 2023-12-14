#include "main.h"

/**
 * print_rev - this is a prototype function
 *
 * @s: this is the string
 */

void print_rev(char *s)
{
	int num = 0;

	while (s[num] != '\0')
	{
		num++;
	}

	while (num > 0)
	{
		_putchar(s[num - 1]);
		num--;
	}
	_putchar('\n');
}
