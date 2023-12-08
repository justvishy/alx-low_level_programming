#include "main.h"

/**
 * print_square - prints out equal l and w of size
 *
 * @size: its a number
 */

void print_square(int size)
{
	int lr = 0;
	int ud = 0;

	if (size > 0)
	{
		while (size > ud)
		{
			while (size > lr)
			{
				_putchar('#');
				lr++;
			}
			lr = 0;
			_putchar('\n');
			ud++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
