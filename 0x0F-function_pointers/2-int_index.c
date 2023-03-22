#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: The array
 * @size: The size of the array
 * @cmp: A pointer to the function to be used to compare values
 * Return: 0 if false, something else otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}
	return (-1);
}
