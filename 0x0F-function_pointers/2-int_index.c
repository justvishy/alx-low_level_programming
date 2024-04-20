#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - finds the int index
 *
 * @array: this is the array
 * @size: size of the int
 * @cmp: cmp function
 *
 * Return: -1, 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	count = 0;
	while (count < size)
	{
		if (cmp(array[count]))
			return (count);
		count++;
	}
	return (-1);
}
