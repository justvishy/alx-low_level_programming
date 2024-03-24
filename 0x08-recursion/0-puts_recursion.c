#include "main.h"
#include <string.h>
#include <ctype.h>

/**
 * _puts_recursion - this prints a string
 *
 * @s: string
 */

void _puts_recursion(char *s)
{
	int length = strlen(s);
	int start = 0;

	if (start < length)
	{
		_putchar(s[start]);
		start++;
		_puts_recursion(s[start:]);
	}
	else
	{
		_putchar('\n');
	}
}
