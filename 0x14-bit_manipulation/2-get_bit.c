#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: The bit
 * @index: The index, starting from 0 of the bit you want to get
 * Return: The value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	{
		return (-1);
	}
	else
	{
		return (n >> index & 1);
	}
}
