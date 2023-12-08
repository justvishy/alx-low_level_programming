#include "main.h"

/**
 * print_diagonal - prints out a diagonal line with spaces
 *
 * @n: number
 */

void print_diagonal(int n)
{
	int A = 0;
	int X = 0;

	if (n > 0)
	{
		while (A < n)
		{
			while (X < A)
			{
				_putchar(' ');
				X++;
			}
			X = 0;
			_putchar('\\');
			_putchar('\n');
			A++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
