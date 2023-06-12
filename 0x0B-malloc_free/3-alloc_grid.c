#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 * @width: The width of the array
 * @height: The height of the array
 * Return: pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int h, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < height; h++)
	{
		a[h] = malloc(sizeof(int) * width);
		if (a[h] == NULL)
		{
			while (h >= 0)
			{
				free(a[h]);
			}
			free(a);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			a[h][w] = 0;
		}
	}
	return (a);
}
