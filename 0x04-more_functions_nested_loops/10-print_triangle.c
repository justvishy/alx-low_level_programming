#include "main.h"

/**
 * print_triangle - prints a right angle triangle
 *
 * @size: This is a number
 */

void print_triangle(int size)
{
	int a = 1;
	int z = 0;
	int x = 0;

	if (size > 0)
	{
		while (size >= a)
		{
			while (size - a > z)
			{
				_putchar(' ');
				z++;
			}
			z = 0;

			while (a > x)
			{
				_putchar('#');
				x++;
			}
			x = 0;
			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
