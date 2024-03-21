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
	int num = 0;

	if (n == 0)
	{
		printf("%c%c", '', '');
	}

	while (num < n)
	{
		if (num < n - 1)
		{
			printf("%d, ", a[num]);
		}
		else
		{
			printf("%d\n", a[num]);
		}
		num++;
	}
}
