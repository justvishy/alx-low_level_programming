#include "main.h"
#include <string.h>

/**
 * reverse_array - this reverses the array
 *
 * @a: this the array
 * @n: this is the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int num = 0;
	int num1 = n - 1;
	int temp;

	while (num < num1)
	{
		temp = a[num];
		a[num] = a[num1];
		a[num1] = temp;
		num++;
		num1--;
	}
}
