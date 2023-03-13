#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid/array.
 * @grid: The 2 dimensional array/grid
 * @height: The grid/array height
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
