#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *
 * @a: int
 * @size: int
 */

void print_diagsums(int *a, int size)
{
	int x, y, z;

	x = 0;
	y = 0;

	z = 0;
	while (z < size)
	{
		x = x + a[z * size + z];
		z++;
	}

	z = size - 1;
	while (z >= 0)
	{
		y += a[z * size + (size - z - 1)];
		z--;
	}

	printf("%d, %d\n", x, y);
}
