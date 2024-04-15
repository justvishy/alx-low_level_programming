#include "main.h"
#include <stdlib.h>

/**
 * free_grid - clears the memory
 *
 * @grid: the array
 * @height: the height
 */

void free_grid(int **grid, int height)
{
	int y;

	if (grid == NULL || height <= 0)
		return;

	y = 0;
	while (y < height)
	{
		if (grid[y] != NULL)
			free(grid[y]);

		y++;
	}
	free(grid);
}
