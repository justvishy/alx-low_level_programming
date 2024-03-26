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
	if (*s)
	{
		_putchar(*s);
		s++;
	}
	else
	{
		_putchar('\n');
	}
}
