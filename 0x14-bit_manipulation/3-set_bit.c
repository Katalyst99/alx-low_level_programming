#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: The pointer to the bit to set
 * @index: The index, starting from 0 of the bit to be set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n |= 1 << index;
		return (1);
	}
}
