#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers starting from n to 98
 *
 * @n: print from this character
 */
void print_to_98(int n)
{
	int i, c;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
				printf("%i, ", i);
			else if (i == 98)
				printf("%i\n", i);
		}
	} else if (n >= 98)
	{
		for (c = n; c >= 98; c--)
		{
			if (c != 98)
				printf("%i, ", c);
			else if (c == 98)
				printf("%i\n", c);
		}
	}
}
