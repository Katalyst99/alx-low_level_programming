#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: The pointer to the bit to set
 * @index: The index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	i = 1 << index;

	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n &= ~i;
		return (1);
	}
}
