#include "main.h"

/**
 * swap_int - this is a prototype function
 *
 * @a: this is num1
 * @b: this is num2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
