#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by,
 * alloc_grid function.
 * @grid: The 2-D array
 * @height: The height
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
