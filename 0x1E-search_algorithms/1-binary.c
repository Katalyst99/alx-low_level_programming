#include "search_algos.h"

/**
 * binary_search - Searches for a value using Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 * Return: The first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t begin = 0, end = size - 1;
	size_t i = 0, midpt = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (begin <= end)
	{
		if (begin == 0 && end == 0)
			return (-1);
		printf("Searching in array: ");
		for (i = begin; i <= end - 1; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%i\n", array[end]);
		midpt = (begin + end) / 2;
		if (value == array[midpt])
			return (midpt);
		else if (value > array[midpt])
		{
			begin = midpt + 1;
		}
		else
			end = midpt - 1;
	}
	return (-1);
}
