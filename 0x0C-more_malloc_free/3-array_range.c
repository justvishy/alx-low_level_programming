#include "main.h"
#include <stdlib.h>

/**
 * array_range - prints the range from min to max
 *
 * @min: min value
 * @max: max value
 * Return: ptr
 */

int *array_range(int min, int max)
{
	int *ptr, x, length, count;

	if (min > max)
		return (NULL);

	length = max - min;
	ptr = (int *) malloc((length + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	x = 0;
	count = min;
	while (x <= length)
	{
		ptr[x] = count;
		x++;
		count++;
	}
	return (ptr);
}
