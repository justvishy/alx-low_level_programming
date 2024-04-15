#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a grid
 *
 * @width: - this is the width
 * @height: - this is the height
 *
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int **ar;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int *) * height);

	if (ar == NULL)
		return (NULL);

	x = 0;
	while (x < height)
	{
		ar[x] = malloc(sizeof(int) * width);

		if (ar[x] == NULL)
			return (NULL);

		y = 0;
		while (y < width)
		{
			ar[x][y] = 0;
			y++;
		}
		x++;
	}
	return (ar);
}
