#include "main.h"

/**
 * _print_rev_recursion - this prints a string in rev
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		s = s + 1;
		_print_rev_recursion(s);
		s = s - 1;
		_putchar(*s);
	}
}
