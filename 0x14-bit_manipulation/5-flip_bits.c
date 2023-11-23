#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip,
 * to get from one number to another.
 * @n: The first number
 * @m: The second number
 * Return: The number of bits you would need to flip,
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int numb;
	unsigned int i = 0;

	numb = n ^ m;

	while (numb > 0)
	{
		if (numb & 1)
		{
			i++;
		}
		numb >>= 1;
	}
	return (i);
}
