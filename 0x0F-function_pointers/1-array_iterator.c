#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - this is the array printer
 *
 * @array: the array passed
 * @size: the size of the array;
 * @action: the action pointer;
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
