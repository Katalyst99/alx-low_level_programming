#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: The bit to get
 * @index: The index, starting from 0 of the bit to be gotten
 * Return: The  value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	i = n >> index;

	if (index > 64)
	{
		return (-1);
	}
	else
	{
		return (i & 1);
	}
}
