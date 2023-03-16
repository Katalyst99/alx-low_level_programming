#include "main.h"
#include <stdlib.h>

/**
 * array_range -  creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value
 * Return: Pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *a;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	a = malloc(sizeof(int) * ((max - min) + 1));

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}
