#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - prints out a string in reverse
 *
 * @s: This is a string of characters
 */

void _print_rev_recursion(char *s)
{
	int length = strlen(s);

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
}
