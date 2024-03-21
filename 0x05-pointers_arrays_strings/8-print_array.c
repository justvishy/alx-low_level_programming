#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - prints the number of elements in the array
 *
 * @a: its the array
 * @n: this is the number of elments to be printed
 */

void print_array(int *a, int n)
{
	int z = 0;

	while (z < n)
	{
		if (z < n - 1)
		{
			printf("%d, ", a[z]);
		}
		else
		{
			printf("%d\n", a[z]);
		}
		z++;
	}

}
