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
	int start;

	if (s[start] != '\0')
	{
		_putchar(s[start]);
		start++;
		_putchar(s[start + 1]);
	}
	else
	{
		_putchar('\n');
	}
}
