#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a 2D grid
 * @grid: multi-dimensional array of integers
 * @height: height
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
