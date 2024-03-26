#include "main.h"

/**
 * _print_rev_recursion - this prints a string in rev
 *
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s = s + 1;
		_print_rev_recursion(s);
	}
	else
	{
		return;
	}
	_putchar(*s);
	s = s - 1;
}
