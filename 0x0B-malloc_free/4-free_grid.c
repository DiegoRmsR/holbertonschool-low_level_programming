#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - Frees two dimensions
 * @grid: Array multidimnesional pointer doble
 * @height: Height
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
