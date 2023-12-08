#include "main.h"

/**
 * print_line - prints the _ nth times
 *
 * @n: this is the nth number
 */

void print_line(int n)
{
	int x = 0;

	while (x < n && n > 0)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
