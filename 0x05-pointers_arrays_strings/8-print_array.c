#include "main.h"
#include <string.h>

/**
 * print_array - prints the number of elements in the array
 *
 * @a: its the array
 * @n: this is the number of elments to be printed
 */

void print_array(int *a, int n)
{
	int num = 0;

	while (num < n)
	{
		_putchar(a[num]);

		if (num != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
	}
}
