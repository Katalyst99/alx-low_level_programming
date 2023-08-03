#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: The pointer to a string of 0 and 1 chars
 * Return: The converted number, or 0 if b is NULL,
 * or there  is one or more chars in the string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int n = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[n])
	{
		if (b[n] != '0' && b[n] != '1')
		{
			return (0);
		}
		number <<= 1;
		number += (b[n] - '0');
		n++;
	}
	return (number);
}
