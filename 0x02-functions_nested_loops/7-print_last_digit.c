#include "main.h"

/**
 * print_last_digit - this is a function
 * @n: this is the input
 * Return: The value
 */

int print_last_digit(int n)
{
	int last;

	last = (n % 10);

	if (last < 0)
	{
		last = -last;
	}

	_putchar(last + '0');
	return (last);
}
