#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string
 * Return: The value of the integer that has been converted from a string.
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int i = 1;

	do {
		if (*s == '-')
		{
			i *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = (n * 10) + (*s - '0');
		}
		else if (n > 0)
		{
			break;
		}


	} while (*s++);

	return (n * i);
}
